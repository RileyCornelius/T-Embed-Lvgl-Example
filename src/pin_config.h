#pragma once

/**--------------------------------------------------------------------------------------
 * ESP32S3 T-Embed
 *-------------------------------------------------------------------------------------*/

// I2C pins
#define PIN_IIC_SDA 18
#define PIN_IIC_SCL 8

// Rotary encoder LED pins
#define PIN_APA102_CLK 45
#define PIN_APA102_DI 42

// Rotary encoder pins
#define PIN_ENCODE_A 2
#define PIN_ENCODE_B 1
#define PIN_ENCODE_BTN 0

// LCD pins
#define PIN_LCD_POWER_ON 46
#define PIN_LCD_BL 15
#define PIN_LCD_DC 13
#define PIN_LCD_CS 10
#define PIN_LCD_CLK 12
#define PIN_LCD_MOSI 11
#define PIN_LCD_RES 9

// Battery voltage pin
#define PIN_BAT_VOLT 4

// Speaker pins
#define PIN_IIS_BCLK 7
#define PIN_IIS_WCLK 5
#define PIN_IIS_DOUT 6

// Microphone pins
#define PIN_ES7210_BCLK 47
#define PIN_ES7210_LRCK 21
#define PIN_ES7210_DIN 14
#define PIN_ES7210_MCLK 48

// SPI pins
#define PIN_SD_CS 39
#define PIN_SD_SCK 40
#define PIN_SD_MOSI 41
#define PIN_SD_MISO 38
