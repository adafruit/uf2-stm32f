#pragma once

#define PA_0 0x00
#define PA_1 0x01
#define PA_2 0x02
#define PA_3 0x03
#define PA_4 0x04
#define PA_5 0x05
#define PA_6 0x06
#define PA_7 0x07
#define PA_8 0x08
#define PA_9 0x09
#define PA_10 0x0A
#define PA_11 0x0B
#define PA_12 0x0C
#define PA_13 0x0D
#define PA_14 0x0E
#define PA_15 0x0F
#define PB_0 0x10
#define PB_1 0x11
#define PB_2 0x12
#define PB_3 0x13
#define PB_4 0x14
#define PB_5 0x15
#define PB_6 0x16
#define PB_7 0x17
#define PB_8 0x18
#define PB_9 0x19
#define PB_10 0x1A
#define PB_11 0x1B
#define PB_12 0x1C
#define PB_13 0x1D
#define PB_14 0x1E
#define PB_15 0x1F
#define PC_0 0x20
#define PC_1 0x21
#define PC_2 0x22
#define PC_3 0x23
#define PC_4 0x24
#define PC_5 0x25
#define PC_6 0x26
#define PC_7 0x27
#define PC_8 0x28
#define PC_9 0x29
#define PC_10 0x2A
#define PC_11 0x2B
#define PC_12 0x2C
#define PC_13 0x2D
#define PC_14 0x2E
#define PC_15 0x2F
#define PD_2 0x32


#define CFG_MAGIC0 0x1e9e10f1
#define CFG_MAGIC1 0x20227a79

// these define keys for getConfig() function
#define CFG_PIN_ACCELEROMETER_INT 1
#define CFG_PIN_ACCELEROMETER_SCL 2
#define CFG_PIN_ACCELEROMETER_SDA 3
#define CFG_PIN_BTN_A 4
#define CFG_PIN_BTN_B 5
#define CFG_PIN_BTN_SLIDE 6
#define CFG_PIN_DOTSTAR_CLOCK 7
#define CFG_PIN_DOTSTAR_DATA 8
#define CFG_PIN_FLASH_CS 9
#define CFG_PIN_FLASH_MISO 10
#define CFG_PIN_FLASH_MOSI 11
#define CFG_PIN_FLASH_SCK 12
#define CFG_PIN_LED 13
#define CFG_PIN_LIGHT 14
#define CFG_PIN_MICROPHONE 15
#define CFG_PIN_MIC_CLOCK 16
#define CFG_PIN_MIC_DATA 17
#define CFG_PIN_MISO 18
#define CFG_PIN_MOSI 19
#define CFG_PIN_NEOPIXEL 20
#define CFG_PIN_RX 21
#define CFG_PIN_RXLED 22
#define CFG_PIN_SCK 23
#define CFG_PIN_SCL 24
#define CFG_PIN_SDA 25
#define CFG_PIN_SPEAKER_AMP 26
#define CFG_PIN_TEMPERATURE 27
#define CFG_PIN_TX 28
#define CFG_PIN_TXLED 29
#define CFG_PIN_IR_OUT 30
#define CFG_PIN_IR_IN 31
#define CFG_PIN_DISPLAY_SCK 32
#define CFG_PIN_DISPLAY_MISO 33
#define CFG_PIN_DISPLAY_MOSI 34
#define CFG_PIN_DISPLAY_CS 35
#define CFG_PIN_DISPLAY_DC 36
#define CFG_DISPLAY_WIDTH 37
#define CFG_DISPLAY_HEIGHT 38
#define CFG_DISPLAY_CFG0 39
#define CFG_DISPLAY_CFG1 40
#define CFG_DISPLAY_CFG2 41
#define CFG_DISPLAY_CFG3 42
#define CFG_PIN_DISPLAY_RST 43
#define CFG_PIN_DISPLAY_BL 44
#define CFG_PIN_SERVO_1 45
#define CFG_PIN_SERVO_2 46
#define CFG_PIN_BTN_LEFT 47
#define CFG_PIN_BTN_RIGHT 48
#define CFG_PIN_BTN_UP 49
#define CFG_PIN_BTN_DOWN 50
#define CFG_PIN_BTN_MENU 51
#define CFG_PIN_LED_R 52
#define CFG_PIN_LED_G 53
#define CFG_PIN_LED_B 54
#define CFG_PIN_LED1 55
#define CFG_PIN_LED2 56
#define CFG_PIN_LED3 57
#define CFG_PIN_LED4 58
#define CFG_SPEAKER_VOLUME 59

#define CFG_PIN_JACK_TX 60
#define CFG_PIN_JACK_SENSE 61
#define CFG_PIN_JACK_HPEN 62
#define CFG_PIN_JACK_BZEN 63
#define CFG_PIN_JACK_PWREN 64
#define CFG_PIN_JACK_SND 65
#define CFG_PIN_JACK_BUSLED 66
#define CFG_PIN_JACK_COMMLED 67

#define CFG_PIN_BTN_SOFT_RESET 69
#define CFG_ACCELEROMETER_TYPE 70
#define CFG_PIN_BTNMX_LATCH 71
#define CFG_PIN_BTNMX_CLOCK 72
#define CFG_PIN_BTNMX_DATA 73
#define CFG_PIN_BTN_MENU2 74
#define CFG_PIN_BATTSENSE 75
#define CFG_PIN_VIBRATION 76
#define CFG_PIN_PWREN 77

#define ACCELEROMETER_TYPE_LIS3DH 0x32
#define ACCELEROMETER_TYPE_MMA8453 0x38
#define ACCELEROMETER_TYPE_FXOS8700 0x3C
#define ACCELEROMETER_TYPE_MMA8653 0x3A
#define ACCELEROMETER_TYPE_MSA300 0x4C

#define CFG_PIN_A0 100
#define CFG_PIN_A1 101
#define CFG_PIN_A2 102
#define CFG_PIN_A3 103
#define CFG_PIN_A4 104
#define CFG_PIN_A5 105
#define CFG_PIN_A6 106
#define CFG_PIN_A7 107
#define CFG_PIN_A8 108
#define CFG_PIN_A9 109
#define CFG_PIN_A10 110
#define CFG_PIN_A11 111
#define CFG_PIN_A12 112
#define CFG_PIN_A13 113
#define CFG_PIN_A14 114
#define CFG_PIN_A15 115

#define CFG_PIN_D0 150
#define CFG_PIN_D1 151
#define CFG_PIN_D2 152
#define CFG_PIN_D3 153
#define CFG_PIN_D4 154
#define CFG_PIN_D5 155
#define CFG_PIN_D6 156
#define CFG_PIN_D7 157
#define CFG_PIN_D8 158
#define CFG_PIN_D9 159
#define CFG_PIN_D10 160
#define CFG_PIN_D11 161
#define CFG_PIN_D12 162
#define CFG_PIN_D13 163
#define CFG_PIN_D14 164
#define CFG_PIN_D15 165

#define CFG_NUM_NEOPIXELS 200
#define CFG_NUM_DOTSTARS 201
#define CFG_DEFAULT_BUTTON_MODE 202
#define CFG_SWD_ENABLED 203
#define CFG_FLASH_BYTES 204
#define CFG_RAM_BYTES 205
#define CFG_SYSTEM_HEAP_BYTES 206
#define CFG_LOW_MEM_SIMULATION_KB 207
#define CFG_BOOTLOADER_BOARD_ID 208
#define CFG_UF2_FAMILY 209
#define CFG_PINS_PORT_SIZE 210
#define CFG_BOOTLOADER_PROTECTION 211

