/*
 * MMA7455.h
 *
 *  Created on: May 17, 2018
 *      Author: Jake Moomaw
 */

#include "stm32l4xx_hal.h"
#include <math.h>

#ifndef MMA7455_H_
#define MMA7455_H_

#define JSC_MMA7455_I2C_ADDRESS					((uint8_t)0x1d<<1)
#define JSC_MMA7455_I2C_PORT					hi2c1
#define JSC_MMA7455_10bit_x_reg_low				((uint8_t)0x00)
#define JSC_MMA7455_10bit_x_reg_high			((uint8_t)0x01)
#define JSC_MMA7455_10bit_y_reg_low				((uint8_t)0x02)
#define JSC_MMA7455_10bit_y_reg_high			((uint8_t)0x03)
#define JSC_MMA7455_10bit_z_reg_low				((uint8_t)0x04)
#define JSC_MMA7455_10bit_z_reg_high			((uint8_t)0x05)
#define JSC_MMA7455_8bit_x_reg					((uint8_t)0x06)
#define JSC_MMA7455_8bit_y_reg					((uint8_t)0x07)
#define JSC_MMA7455_8bit_z_reg					((uint8_t)0x08)
#define JSC_MMA7455_init_reg					((uint8_t)0x16)
#define JSC_MMA7455_interrupt_reg				((uint8_t)0x17)
#define JSC_MMA7455_control1_reg				((uint8_t)0x18)
#define JSC_MMA7455_control2_reg				((uint8_t)0x19)
#define JSC_MMA7455_freefall_limit_reg			((uint8_t)0x1a)

#define JSC_MMA7455_2g_init_byte				((uint8_t)0x15)
#define JSC_MMA7455_4g_init_byte				((uint8_t)0x19)
#define JSC_MMA7455_8g_init_byte				((uint8_t)0x11)
#define JSC_MMA7455_freefall_init_byte			((uint8_t)0x12)
#define JSC_MMA7455_freefall_control1_byte		((uint8_t)0x40)
#define JSC_MMA7455_freefall_control2_byte		((uint8_t)0x01)
#define JSC_MMA7455_freefall_limit_byte			((uint8_t)0x07)
#define JSC_MMA7455_interrupt_clear_byte		((uint8_t)0x03)
#define JSC_MMA7455_interrupt_reset_byte		((uint8_t)0x00)

void JSC_MMA7455_Init_2G();
void JSC_MMA7455_Init_4G();
void JSC_MMA7455_Init_8G();
void JSC_MMA7455_Init_Freefall();
void JSC_MMA7455_Interrupt_Reset();
int8_t JSC_MMA7455_Read_8Bit_X();
int8_t JSC_MMA7455_Read_8Bit_Y();
int8_t JSC_MMA7455_Read_8Bit_Z();
int16_t JSC_MMA7455_Read_10Bit_X();
int16_t JSC_MMA7455_Read_10Bit_Y();
int16_t JSC_MMA7455_Read_10Bit_Z();
float JSC_MMA7455_Pitch();
float JSC_MMA7455_Roll();
extern I2C_HandleTypeDef JSC_MMA7455_I2C_PORT;

#endif /* MMA7455_H_ */
