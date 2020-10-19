/**
 * Copyright (c) 2014 - 2020, Nordic Semiconductor ASA
 *
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice, this
 *    list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form, except as embedded into a Nordic
 *    Semiconductor ASA integrated circuit in a product or a software update for
 *    such product, must reproduce the above copyright notice, this list of
 *    conditions and the following disclaimer in the documentation and/or other
 *    materials provided with the distribution.
 *
 * 3. Neither the name of Nordic Semiconductor ASA nor the names of its
 *    contributors may be used to endorse or promote products derived from this
 *    software without specific prior written permission.
 *
 * 4. This software, with or without modification, must only be used with a
 *    Nordic Semiconductor ASA integrated circuit.
 *
 * 5. Any software provided in binary form under this license must not be reverse
 *    engineered, decompiled, modified and/or disassembled.
 *
 * THIS SOFTWARE IS PROVIDED BY NORDIC SEMICONDUCTOR ASA "AS IS" AND ANY EXPRESS
 * OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY, NONINFRINGEMENT, AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL NORDIC SEMICONDUCTOR ASA OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE
 * GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
 * OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */
#ifndef METIER_H
#define METIER_H

#ifdef __cplusplus
extern "C" {
#endif

#include "nrf_gpio.h"

// LEDs definitions for METIER
#define LEDS_NUMBER  2  

#define LED_START      26
#define LED_RED        26
#define LED_GREEN      27
#define LED_STOP       27

#define LEDS_ACTIVE_STATE 0

#define LEDS_INV_MASK  LEDS_MASK

#define LEDS_LIST { LED_RED, LED_GREEN }

#define BSP_LED_0      LED_RED
#define BSP_LED_1      LED_GREEN

#define BUTTONS_NUMBER 2

#define BUTTON_START   24
#define BUTTON_UP      24
#define BUTTON_DOWN    25
#define BUTTON_STOP    25
#define BUTTON_PULL    NRF_GPIO_PIN_PULLUP

#define BUTTONS_ACTIVE_STATE 0

#define BUTTONS_LIST { BUTTON_UP, BUTTON_DOWN }

#define BSP_BUTTON_0   BUTTON_UP
#define BSP_BUTTON_1   BUTTON_DOWN

#define RX_PIN_NUMBER  31
#define TX_PIN_NUMBER  29
#define CTS_PIN_NUMBER 30
#define RTS_PIN_NUMBER 28
#define HWFC           true

#define SPIM0_SCK_PIN   15  // SPI clock GPIO pin number.
#define SPIM0_MOSI_PIN  13  // SPI Master Out Slave In GPIO pin number.
#define SPIM0_MISO_PIN  14  // SPI Master In Slave Out GPIO pin number.

#define SPIM0_SS_LSM6DSL_CS    16  // SPI Slave Select GPIO pin number.
#define SPIM0_SS_LPS22_CS    17  // SPI Slave Select GPIO pin number.




// ADC board mappings
#define VIBE_ADC  2
#define SOLENOID_ADC  3
#define MOTOR_ADC 4
#define MOTOR_THERM 5

//GPIO mappings
#define SOLENOID_CTRL 6
#define MOTOR_CTRL  7
#define VIBE_CTRL 8
#define BAT_CHG_N  18
#define TPS62472_CTRL 23


//I2C mappings
#define SDA 11
#define SCL 12

//Interrupts
#define LSM6DSL_INT2  19
#define LSM6DSL_INT1  20
#define LPS22_INT 22





#ifdef __cplusplus
}
#endif

#endif // METIER_H
