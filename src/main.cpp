#include <Arduino.h>
#include "ui/lv_setup.h"

void setup()
{
  lv_begin();
}

void loop()
{
  lv_handler();
}