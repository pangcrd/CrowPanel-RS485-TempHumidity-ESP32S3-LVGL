#include "drv/pins_config.h"
#include "drv/LovyanGFX_Driver.h"
#include <lvgl.h>
#include <Wire.h>
#include <SPI.h>
#include <stdbool.h>
#include <Adafruit_SSD1306.h>
#include <Adafruit_GFX.h>
#include "ui/ui.h"
#include "I2C_module.h" 
#include "XY_MD02_Config.h"
#include <HardwareSerial.h>

HardwareSerial rs485Serial(1); //uart1
LGFX gfx;
/* Change to your screen resolution */
static lv_disp_draw_buf_t draw_buf;
static lv_color_t *buf;
static lv_color_t *buf1;

uint16_t touch_x, touch_y;

//  Display refresh
void my_disp_flush(lv_disp_drv_t *disp, const lv_area_t *area, lv_color_t *color_p) {
  gfx.startWrite();
  gfx.pushImageDMA(area->x1, area->y1, area->x2 - area->x1 + 1, area->y2 - area->y1 + 1, (lgfx::rgb565_t *)&color_p->full);
  gfx.endWrite();
  lv_disp_flush_ready(disp);
}
//  Read touch
void my_touchpad_read( lv_indev_drv_t * indev_driver, lv_indev_data_t * data )
{
  data->state = LV_INDEV_STATE_REL;// The state of data existence when releasing the finger
  bool touched = gfx.getTouch( &touch_x, &touch_y );
  if (touched)
  {
    data->state = LV_INDEV_STATE_PR;
    //  Set coordinates
    data->point.x = touch_x;
    data->point.y = touch_y;
  }
}
void setup()
{
  Serial.begin(115200);
  
  XYMD02::setupModbus (rs485Serial,1,20,19);//IO19 to RX IO20 to TX
  XYMD02::startTask();
  I2C_MODULE::i2c_begin();
  
  //RTC_BM8563::initRTCTask();
  //RTC_BM8563::printRTC();

  // Init Display
  gfx.init();
  gfx.initDMA();
  gfx.startWrite();
  gfx.fillScreen(TFT_BLACK);

  lv_init();

  // size_t buffer_size = sizeof(lv_color_t) * LCD_H_RES * LCD_V_RES;
  // buf  = (lv_color_t*) heap_caps_malloc(buffer_size, MALLOC_CAP_SPIRAM);
  // buf1 = (lv_color_t*) heap_caps_malloc(buffer_size, MALLOC_CAP_SPIRAM);
  // lv_disp_draw_buf_init(&draw_buf, buf, buf1, LCD_H_RES * LCD_V_RES);

  size_t buffer_size = sizeof(lv_color_t) * LCD_H_RES * 10;
  buf  = (lv_color_t *)heap_caps_malloc(buffer_size, MALLOC_CAP_DMA);
  buf1 = (lv_color_t *)heap_caps_malloc(buffer_size, MALLOC_CAP_DMA);

  lv_disp_draw_buf_init(&draw_buf, buf, buf1, LCD_H_RES * 10);

  // Initialize display
  static lv_disp_drv_t disp_drv;
  lv_disp_drv_init(&disp_drv);
  // Change the following lines to your display resolution
  disp_drv.hor_res = LCD_H_RES;
  disp_drv.ver_res = LCD_V_RES;
  disp_drv.flush_cb = my_disp_flush;
  disp_drv.draw_buf = &draw_buf;
  lv_disp_drv_register(&disp_drv);

  // Initialize input device driver program
  static lv_indev_drv_t indev_drv;
  lv_indev_drv_init(&indev_drv);
  indev_drv.type = LV_INDEV_TYPE_POINTER;
  indev_drv.read_cb = my_touchpad_read;
  lv_indev_drv_register(&indev_drv);
  delay(100);

  //gfx.fillScreen(TFT_BLACK);
  I2C_BUZZ::buzzer_init();
  I2C_BUZZ::buzzer_set(1);//set time for buzzer
  BRIGHTNESS::init_brightness();

  ui_init();
  //Serial.println( "Setup done" );
  RTC_PCF8563::calibRTC_Async(ui_TextArea1);
}
void loop()
{
  ScreenLog::processQueue();
  lv_timer_handler(); /* let the GUI do its work */
  
  static uint32_t lastime = 0;  
  uint32_t now = millis();
  if (now - lastime > 1000)
    {
      lastime = now;
      //RTC_BM8563::printRTC();
      RTC_PCF8563::updateRTCui(ui_Label7, ui_Label8);      
    }
    XYMD02::UpdateRS485_UI(ui_Label1, ui_Label3,ui_tempgauge,ui_hunigauge);
    BRIGHTNESS::send_cmd_brightness(); 
    I2C_BUZZ::buzzer_update();
    delay(5);
}