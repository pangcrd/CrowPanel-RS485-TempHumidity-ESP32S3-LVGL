#ifndef XY_MD02_CONFIG_H
#define XY_MD02_CONFIG_H

#include <ModbusMaster.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "lvgl.h"
#include "screen_log.h"

bool startup_done = false;
bool startup_up = true;
int startup_value = 0;
unsigned long last_update = 0;

namespace XYMD02 {
    ModbusMaster node;            
    float temperature = 0;         
    float humidity = 0;              
    bool rs485_ok = false;            
    TaskHandle_t rs485TaskHandle = NULL;  

    // ====== Function: Setup Modbus RS485 ======
    void setupModbus(HardwareSerial &rs485Serial, uint8_t slaveID, int txPin, int rxPin) {
        // Initialize UART for RS485
        rs485Serial.begin(9600, SERIAL_8N1, rxPin, txPin);
        node.begin(slaveID, rs485Serial);
    }

    // ====== Function: Read data from Modbus Sensor ======
    bool ReadSensorData(float &temperature, float &humidity) {
        uint16_t data[2];
        uint8_t result = node.readInputRegisters(0x0001, 2);  // read 2 registers

        if (result == node.ku8MBSuccess) {
            // Extract data from buffer
            data[0] = node.getResponseBuffer(0); 
            data[1] = node.getResponseBuffer(1); 

            // Convert to float
            temperature = data[0] / 10.0f;
            humidity = data[1] / 10.0f;

            return true; 
        } 
        else {
            Serial.printf(" RS485 Read failed (code %d)\n", result);
            return false;  
        }
    }

    // ====== Background Task: Poll sensor every 2 seconds ======
    void rs485Task(void* parameter) {
        bool last_rs485_ok = true; 
        for (;;) {
            float temp, hum;
            bool ok = ReadSensorData(temp, hum);

            if (ok) {
                temperature = temp;
                humidity = hum;
                rs485_ok = true;
                
            } else {
                rs485_ok = false;
                
            }
            if (rs485_ok != last_rs485_ok) {
                last_rs485_ok = rs485_ok;

            if (rs485_ok)
                ScreenLog::queueLog("\n>Sensor OK!\n");
            else
                ScreenLog::queueLog("\n>RS485 Sensor lost connection!\n");
        }

            vTaskDelay(pdMS_TO_TICKS(2000));
        }
    }

    // ====== Function: Start RS485 Task (call once in setup) ======
    void startTask() {
        if (rs485TaskHandle == NULL) {
            xTaskCreatePinnedToCore(
                rs485Task,         // task function
                "RS485_Task",      // task name
                4096,              // stack size
                NULL,              // parameter
                1,                 // priority
                &rs485TaskHandle,  // handle
                1                  // run on core 1
            );
            //Serial.println("RS485 Task started");
        }
    }

    // ====== Function: Update LVGL UI (non-blocking) ======
    void UpdateRS485_UI(lv_obj_t* lblTemp, lv_obj_t* lblHumi,
                        lv_obj_t* arcTemp, lv_obj_t* arcHumi) {

        char buf[16];

        if (rs485_ok) {
            // Normal display
            snprintf(buf, sizeof(buf), "%.0fºC", temperature);
            lv_label_set_text(lblTemp, buf);

            snprintf(buf, sizeof(buf), "%.0f%%", humidity);
            lv_label_set_text(lblHumi, buf);

            lv_arc_set_value(arcTemp, (int)temperature);
            lv_arc_set_value(arcHumi, (int)humidity);
            
        } else {
            // Lost connection → show error
            lv_label_set_text(lblTemp, "--");
            lv_label_set_text(lblHumi, "--");
            lv_arc_set_value(arcTemp, 0);
            lv_arc_set_value(arcHumi, 0);
            
        }
    }
// ====== Startup effect for gauge ======
void Gauge_Startup_Animation(lv_obj_t* gaugeTemp, lv_obj_t* gaugeHumi) {
    const int MAX_VALUE = 100;
    const int STEP = 3;               // speed of increase/decrease
    const unsigned long INTERVAL = 20; // ms 

    unsigned long now = millis();
    if (now - last_update < INTERVAL) return;
    last_update = now;

    if (!startup_done) {
        // Up
        if (startup_up) {
            startup_value += STEP;
            if (startup_value >= MAX_VALUE) {
                startup_value = MAX_VALUE;
                startup_up = false;
            }
        }
        // Down
        else {
            startup_value -= STEP;
            if (startup_value <= 0) {
                startup_value = 0;
                startup_done = true; 
            }
        }

        lv_arc_set_value(gaugeTemp, startup_value);
        lv_arc_set_value(gaugeHumi, startup_value);
        // Update RPM labels with the current values
        char buf[16];
        snprintf(buf, sizeof(buf), "%dºC", startup_value);
        lv_label_set_text(ui_Label1, buf);
        
        snprintf(buf, sizeof(buf), "%d%%", startup_value);
        lv_label_set_text(ui_Label3, buf);
    }
}
}

#endif
