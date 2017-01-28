#ifndef _DEVO12E_TARGET_H_
#define _DEVO12E_TARGET_H_

#include "../common/devo/common_devo.h"

#define TXID 0x0c
#define VECTOR_TABLE_LOCATION 0x4000
#define SPIFLASH_SECTOR_OFFSET 54
#define SPIFLASH_SECTORS 1024

#define HAS_STANDARD_GUI    1
#define HAS_ADVANCED_GUI    1
#define HAS_PERMANENT_TIMER 1
#define HAS_TELEMETRY       1
#define HAS_EXTENDED_TELEMETRY 1
#define HAS_TOUCH           0
#define HAS_RTC             0
#define HAS_VIBRATINGMOTOR  1
#define HAS_DATALOG         1
#define HAS_LAYOUT_EDITOR   1
#define HAS_SCANNER         0
#define HAS_EXTRA_SWITCHES  0
#define HAS_EXTRA_BUTTONS   0
#define HAS_MULTIMOD_SUPPORT 1
#define HAS_VIDEO           0
#define HAS_4IN1_FLASH      1

#ifdef BUILDTYPE_DEV
   #define DEBUG_WINDOW_SIZE 200
#else
   #define DEBUG_WINDOW_SIZE 0
#endif


#define MIN_BRIGHTNESS 0
#define DEFAULT_BATTERY_ALARM 8000
#define DEFAULT_BATTERY_CRITICAL 7500
#define MAX_BATTERY_ALARM 12000
#define MIN_BATTERY_ALARM 5500
#define MAX_POWER_ALARM 60

#define NUM_OUT_CHANNELS 12
#define NUM_VIRT_CHANNELS 10

#define NUM_TRIMS 10
#define NUM_TOGGLES 5
#define MAX_POINTS 13
#define NUM_MIXERS ((NUM_OUT_CHANNELS + NUM_VIRT_CHANNELS) * 4)

#define INP_HAS_CALIBRATION 8

/* Compute voltage from y = 0.003246x + 0.4208 */
#define VOLTAGE_NUMERATOR 324
#define VOLTAGE_OFFSET    421

#endif //_DEVO12E_TARGET_H_
