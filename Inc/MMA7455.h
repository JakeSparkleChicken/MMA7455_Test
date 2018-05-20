/*
 * MMA7455.h
 *
 *  Created on: May 17, 2018
 *      Author: Jake Moomaw
 */

#include "stm32l4xx_hal.h"

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

#define JSC_MMA7455_2g_init_byte				((uint8_t)0x15)
#define JSC_MMA7455_4g_init_byte				((uint8_t)0x19)
#define JSC_MMA7455_8g_init_byte				((uint8_t)0x11)

extern char JSC_xchar[12];
extern char JSC_ychar[12];
extern char JSC_zchar[12];

void JSC_MMA7455_Init();
void JSC_MMA7455_Read_8Bit_X();
void JSC_MMA7455_Read_8Bit_Y();
void JSC_MMA7455_Read_8Bit_Z();
void JSC_MMA7455_Read_8Bit_All();
void JSC_MMA7455_Read_10Bit_X();
void JSC_MMA7455_Read_10Bit_Y();
void JSC_MMA7455_Read_10Bit_Z();
void JSC_MMA7455_Read_10Bit_All();

extern I2C_HandleTypeDef JSC_MMA7455_I2C_PORT;

#endif /* MMA7455_H_ */
