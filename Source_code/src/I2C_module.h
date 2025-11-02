
#ifndef I2C_MODULE_H
#define I2C_MODULE_H

#include "WiFi.h"
#include "I2C_BM8563.h"
#include <time.h>
#include "screen_log.h"

I2C_BM8563 rtc(I2C_BM8563_DEFAULT_ADDRESS, Wire);

const char* ssid = "Your_Wifi_SSID";//Your_Wifi_SSID
const char* pass = "Your_Wifi_Passwword";//Your_Wifi_Passwword

const char *ntpServer = "time.cloudflare.com";

// Global task handle
TaskHandle_t syncTaskHandle = NULL;

namespace I2C_MODULE {
   
    bool i2cScanForAddress(uint8_t address) {
        Wire.beginTransmission(address);
        return (Wire.endTransmission() == 0);

        }

        // Wrapper function for sending I2C commands
    void sendI2CCommand(uint8_t command) {
        uint8_t error;
        // Start sending commands to the specified address
        Wire.beginTransmission(0x30);
        // Send command
        Wire.write(command);
        //  End transmission and return status
        error = Wire.endTransmission();

        if (error == 0) {
            Serial.printf("0x%02X\n", command,HEX);
            //Serial.print(command, HEX);
            //Serial.println(" Sent successfully");
        } else {
            //Serial.print("Command sent error, error code:");
            Serial.println(error);
        }

}
    void i2c_begin(){ 

        Wire.begin(15, 16);
        //vTaskDelay(500/portTICK_PERIOD_MS);
        while (1) {
            if (i2cScanForAddress(0x30) && i2cScanForAddress(0x5D)) {
            //Serial.print("The microcontroller is detected: address 0x");
            Serial.println(0x30, HEX);
            //Serial.print("The microcontroller is detected: address 0x");
            Serial.println(0x5D, HEX);


            break;
            } else {
            //Serial.print("No microcontroller was detected: address 0x");
            Serial.println(0x30, HEX);
            //Serial.print("No microcontroller was detected: address 0x");
            Serial.println(0x5D, HEX);
            //Prevent the microcontroller did not start to adjust the bright screen
            sendI2CCommand(0x10);//full brightness
            pinMode(1, OUTPUT);
            digitalWrite(1, LOW);
            delay(120);
            pinMode(1, INPUT);
            delay(100);
            }
        }
    }
}
 // ====== Function: Setup RTC_PCF8563 ======
namespace RTC_PCF8563 {
    void initRTCTask(void* pars) {
        static char log_buf[80];
        
        ScreenLog::queueLog(">Starting RTC sync to CLOUDFLARE...\n");
        
        rtc.begin(); 
        WiFi.begin(ssid, pass);
        Serial.print("Connecting to WiFi");
        ScreenLog::queueLog(">Connecting to WiFi");
        
    int timeout = 0;
    while (WiFi.status() != WL_CONNECTED && timeout < 20) {
        vTaskDelay(500 / portTICK_PERIOD_MS);
        Serial.print(".");
        ScreenLog::queueLog(".");
        timeout++;
    }
    
    if (WiFi.status() != WL_CONNECTED) {
        Serial.println("\nWiFi connection failed!");
        ScreenLog::queueLog("\n>WiFi failed!\n");
        ScreenLog::queueLog("\n>Please check SSID PASS!\n");
        WiFi.disconnect(true);
        syncTaskHandle = NULL;
        vTaskDelete(NULL);
        return;
    }
    
    Serial.println("\nWiFi connected!");
    ScreenLog::queueLog("\n>WiFi connected!\n");

    // NTP GMT+7
    configTime(7*3600, 0, ntpServer);
    
    Serial.print("Waiting for NTP sync");
    ScreenLog::queueLog(">Waiting for NTP...");
    
    struct tm timeInfo;
    int retries = 0;
    while (!getLocalTime(&timeInfo) && retries < 10) {
        vTaskDelay(500 / portTICK_PERIOD_MS);
        Serial.print(".");
        ScreenLog::queueLog(".");
        retries++;
    }
    Serial.println();

    if (getLocalTime(&timeInfo)) {
        I2C_BM8563_TimeTypeDef t;
        t.hours = timeInfo.tm_hour;
        t.minutes = timeInfo.tm_min;
        t.seconds = timeInfo.tm_sec;
        rtc.setTime(&t);

        I2C_BM8563_DateTypeDef d;
        d.weekDay = timeInfo.tm_wday;
        d.month = timeInfo.tm_mon + 1;
        d.date = timeInfo.tm_mday;
        d.year = timeInfo.tm_year + 1900;
        rtc.setDate(&d);

        snprintf(log_buf, sizeof(log_buf), "\nSynced: %04d/%02d/%02d %02d:%02d:%02d\n",
                d.year, d.month, d.date,
                t.hours, t.minutes, t.seconds);
        
        Serial.println(log_buf);
        ScreenLog::queueLog(log_buf);
        
    } else {
        Serial.println("\nNTP sync failed!");
        ScreenLog::queueLog("\n>NTP sync failed!\n");
    }
    
    WiFi.disconnect(true);
    ScreenLog::queueLog(">WiFi disconnected\n");
    
    // Cleanup
    syncTaskHandle = NULL;
    vTaskDelete(NULL);
}

void calibRTC_Async(lv_obj_t* log_debug) {
 if (syncTaskHandle != NULL) {
        ScreenLog::queueLog(">Sync already running!\n");
        return;
    }
    // init module log
    ScreenLog::begin(log_debug);
    ScreenLog::clear();

    xTaskCreatePinnedToCore(initRTCTask, "SyncRTC", 8192, NULL, 1, &syncTaskHandle, 0);
}

void printRTC() {

    I2C_BM8563_TimeTypeDef timeStruct;
    I2C_BM8563_DateTypeDef dateStruct;
    rtc.getTime(&timeStruct);
    rtc.getDate(&dateStruct);
    Serial.printf("%04d/%02d/%02d %02d:%02d:%02d\n",
                dateStruct.year, dateStruct.month, dateStruct.date,
                timeStruct.hours, timeStruct.minutes, timeStruct.seconds);

}

void updateRTCui(lv_obj_t* timeLabel, lv_obj_t* dateLabel) {
    I2C_BM8563_TimeTypeDef timeStruct;
    I2C_BM8563_DateTypeDef dateStruct;
    
    rtc.getTime(&timeStruct);
    rtc.getDate(&dateStruct);
    
    char timeStr[10];  // "HH:MM:SS\0"
    char dateStr[12];  // "DD/MM/YYYY\0"
    
  
    sprintf(timeStr, "%02d:%02d:%02d", 
            timeStruct.hours, 
            timeStruct.minutes, 
            timeStruct.seconds);
    

    sprintf(dateStr, "%02d/%02d/%04d", 
            dateStruct.date, 
            dateStruct.month, 
            dateStruct.year);
    
    lv_label_set_text(timeLabel, timeStr);
    lv_label_set_text(dateLabel, dateStr);
}
}

 // ====== Pointer for UI linked ======

void (*testBuzz)(uint8_t) = nullptr;
void (*brightness)(uint8_t) = nullptr;

 // ====== Function: Setup Buzzer ======
namespace I2C_BUZZ {
    unsigned long startTime = 0;
    unsigned long duration = 0;
    bool active = false;

    void buzzer_set(uint8_t setTimeSec) {
        // ON
        Wire.beginTransmission(0x30);
        Wire.write(0x15);
        Wire.endTransmission();

        startTime = millis();
        duration = (unsigned long)setTimeSec * 1000;
        active = true;
    }

    void buzzer_update() {
        if (active && millis() - startTime >= duration) {
            // OFF
            Wire.beginTransmission(0x30);
            Wire.write(0x16);
            Wire.endTransmission();

            active = false;
        }
    }

    void buzzer_init() {
        testBuzz = buzzer_set;
    }
}
// ====== Function: Control brightness with I2C command ======
namespace BRIGHTNESS {
    uint8_t target = 100;
    uint8_t current = 255;
    unsigned long lastUpdate = 0;

    void update_slider(uint8_t value) {
        target = value;
    }
    void send_cmd_brightness() {
        if (millis() - lastUpdate >= 50) {
            lastUpdate = millis();
            if (current != target) {
                uint8_t pwmCmd[] = { 0x06, 0x07, 0x08, 0x09, 0x10 }; //20% 40% 60% 80% 100%
                uint8_t index = target / 20;
                if (index > 4) index = 4; //force out of bound

                Wire.beginTransmission(0x30);
                Wire.write(pwmCmd[index]);
                Wire.endTransmission();

                current = target;
            }
        }
    }
    void init_brightness(){
        brightness = update_slider;
    }
}

#endif