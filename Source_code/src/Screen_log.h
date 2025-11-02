#ifndef SCREEN_LOG_H
#define SCREEN_LOG_H

#include <Arduino.h>
#include "lvgl.h"
#include "freertos/FreeRTOS.h"
#include "freertos/queue.h"

namespace ScreenLog {

#define LOG_QUEUE_SIZE 10
#define LOG_MSG_MAX_LEN 128

struct LogMessage {
    char text[LOG_MSG_MAX_LEN];
};

// Module internal global variables
static QueueHandle_t logQueue = NULL;
static lv_obj_t* logTarget = NULL;

// Initialize log system
inline void begin(lv_obj_t* target) {
    logTarget = target;
    if (logQueue == NULL)
        logQueue = xQueueCreate(LOG_QUEUE_SIZE, sizeof(LogMessage));
}

// Send log to queue (thread-safe)
inline void queueLog(const char* text) {
    if (logQueue == NULL) return;
    LogMessage msg;
    strncpy(msg.text, text, LOG_MSG_MAX_LEN - 1);
    msg.text[LOG_MSG_MAX_LEN - 1] = '\0';
    xQueueSend(logQueue, &msg, 0);
}

// Log handling function – should be called in loop or LVGL task
inline void processQueue() {
    if (logQueue == NULL || logTarget == NULL) return;
    LogMessage msg;
    while (xQueueReceive(logQueue, &msg, 0) == pdTRUE) {
        lv_textarea_add_text(logTarget, msg.text);
        lv_textarea_set_cursor_pos(logTarget, LV_TEXTAREA_CURSOR_LAST);
    }
}

//Clean up (if app needs to be reset)
inline void clear() {
    if (logTarget)
        lv_textarea_set_text(logTarget, "");
}

}

#endif
