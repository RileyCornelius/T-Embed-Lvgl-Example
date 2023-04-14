#include <Arduino.h>
#include "ui/lv_setup.h"
#include "ui/ui.h"
#include "time_func.h"

void setup()
{
  lv_begin();  // Initialize lvgl with display and rotary encoder
  ui_init();   // Initialize UI generated by Square Line
  time_init(); // Initialize time and date from compiler
}

void loop()
{
  lv_handler();  // Update UI
  update_time(); // Update time and date on UI
}