#pragma once
// clang-format off

/*
    6_pack_external_XYYZ_M1XYZP_M25vO_M3MosfetMist.h
    Covers all V1 versions V1p0, V1p1, etc
    Part of Grbl_ESP32
    Pin assignments for the ESP32 I2S 6-axis board
    
    2020-11-04 B. Dring for K.O.
    Grbl_ESP32 is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.
    Grbl is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.
    You should have received a copy of the GNU General Public License
    along with Grbl_ESP32.  If not, see <http://www.gnu.org/licenses/>.
*/
#define MACHINE_NAME            "TOPSCNC HEAVY"

#define N_AXIS 3

// === Special Features

// I2S (steppers & other output-only pins)
#define USE_I2S_OUT
#define USE_I2S_STEPS
//#define DEFAULT_STEPPER ST_I2S_STATIC

#define I2S_OUT_BCK             GPIO_NUM_22
#define I2S_OUT_WS              GPIO_NUM_17
#define I2S_OUT_DATA            GPIO_NUM_21


// Motor Socket #1
#define X_DISABLE_PIN           I2SO(0)
#define X_DIRECTION_PIN         I2SO(1)
#define X_STEP_PIN              I2SO(2)

// Motor Socket #2
#define Y_DIRECTION_PIN         I2SO(4)
#define Y_STEP_PIN              I2SO(5)
#define Y_DISABLE_PIN           I2SO(7)

// Motor Socket #3
#define Y2_DISABLE_PIN          I2SO(8)
#define Y2_DIRECTION_PIN        I2SO(9)
#define Y2_STEP_PIN             I2SO(10)

// Motor Socket #4
#define Z_DIRECTION_PIN         I2SO(12)
#define Z_STEP_PIN              I2SO(13)
#define Z_DISABLE_PIN           I2SO(15)

/*
    Socket I/O reference
    The list of modules is here...
    https://github.com/bdring/6-Pack_CNC_Controller/wiki/CNC-I-O-Module-List
    Click on each module to get example for using the modules in the sockets
*/

// 4x Input Module in Socket #1
// https://github.com/bdring/6-Pack_CNC_Controller/wiki/4x-Switch-Input-module
#define X_LIMIT_PIN             GPIO_NUM_33
#define Y_LIMIT_PIN             GPIO_NUM_32
#define Z_LIMIT_PIN             GPIO_NUM_35
#define Y2_LIMIT_PIN            GPIO_NUM_34

#define DEFAULT_INVERT_LIMIT_PINS       0 // Default for NO Switches
#define DEFAULT_INVERT_PROBE_PIN        0

// 5v Output Module inSocket #2
// https://github.com/bdring/6-Pack_CNC_Controller/wiki/4x-5V-Buffered-Output-Module
#define SPINDLE_TYPE            SpindleType::PWM
#define SPINDLE_OUTPUT_PIN      GPIO_NUM_2  // 5v PWM Output
#define SPINDLE_ENABLE_PIN      GPIO_NUM_25  // Inverted 5v Enable
#define USER_DIGITAL_PIN_4       GPIO_NUM_39  // 5v Power for SuperPID
#define USER_DIGITAL_PIN_0      GPIO_NUM_36  // M7 on M9 Off Unused


// Quad MOSFET module in socket #3
// https://github.com/bdring/6-Pack_CNC_Controller/wiki/Quad-MOSFET-Module
#define COOLANT_MIST_PIN       GPIO_NUM_26  //24v Mist Solenoid
#define COOLANT_FLOOD_PIN      GPIO_NUM_4    
#define USER_DIGITAL_PIN_1     GPIO_NUM_16   
#define USER_DIGITAL_PIN_2     GPIO_NUM_27


// Open module in socket #4
#define PROBE_PIN               GPIO_NUM_14


// === Default settings
#define DEFAULT_STEP_PULSE_MICROSECONDS I2S_OUT_USEC_PER_PULSE
