/*
 * MMA7455.c
 *
 *  Created on: May 19, 2018
 *      Author: Jake Moomaw
 */

#include "stm32l4xx_hal.h"
#include "MMA7455.h"

uint8_t init_byte = JSC_MMA7455_2g_init_byte;
uint8_t *pJSC_MMA7455_init = &init_byte;
int8_t JSC_8bit_xval = 0;
uint8_t *pJSC_8bit_xval = &JSC_8bit_xval;
int8_t JSC_8bit_yval = 0;
uint8_t *pJSC_8bit_yval = &JSC_8bit_yval;
int8_t JSC_8bit_zval = 0;
uint8_t *pJSC_8bit_zval = &JSC_8bit_zval;
int16_t JSC_10bit_xval = 0;
uint16_t *pJSC_10bit_xval = &JSC_10bit_xval;
int16_t JSC_10bit_yval = 0;
uint16_t *pJSC_10bit_yval = &JSC_10bit_yval;
int16_t JSC_10bit_zval = 0;
uint16_t *pJSC_10bit_zval = &JSC_10bit_zval;
char JSC_xchar[12];
char JSC_ychar[12];
char JSC_zchar[12];

void JSC_MMA7455_Init()
{
	HAL_I2C_Mem_Write(&hi2c1, JSC_MMA7455_I2C_ADDRESS, JSC_MMA7455_init_reg, 1, pJSC_MMA7455_init, 1, 10000);
}
void JSC_MMA7455_Read_8Bit_X()
{
	HAL_I2C_Mem_Read(&hi2c1, JSC_MMA7455_I2C_ADDRESS, JSC_MMA7455_8bit_x_reg, 1, pJSC_8bit_xval, 1, 10000);
	sprintf(JSC_xchar, "%d", JSC_8bit_xval);
}
void JSC_MMA7455_Read_8Bit_Y()
{
	HAL_I2C_Mem_Read(&hi2c1, JSC_MMA7455_I2C_ADDRESS, JSC_MMA7455_8bit_y_reg, 1, pJSC_8bit_yval, 1, 10000);
	sprintf(JSC_xchar, "%d", JSC_8bit_yval);
}
void JSC_MMA7455_Read_8Bit_Z()
{
	HAL_I2C_Mem_Read(&hi2c1, JSC_MMA7455_I2C_ADDRESS, JSC_MMA7455_8bit_z_reg, 1, pJSC_8bit_zval, 1, 10000);
	sprintf(JSC_xchar, "%d", JSC_8bit_zval);
}
void JSC_MMA7455_Read_8Bit_All()
{
	HAL_I2C_Mem_Read(&hi2c1, JSC_MMA7455_I2C_ADDRESS, JSC_MMA7455_8bit_x_reg, 1, pJSC_8bit_xval, 1, 10000);
	HAL_I2C_Mem_Read(&hi2c1, JSC_MMA7455_I2C_ADDRESS, JSC_MMA7455_8bit_y_reg, 1, pJSC_8bit_yval, 1, 10000);
	HAL_I2C_Mem_Read(&hi2c1, JSC_MMA7455_I2C_ADDRESS, JSC_MMA7455_8bit_z_reg, 1, pJSC_8bit_zval, 1, 10000);
	sprintf(JSC_xchar, "%d", JSC_8bit_xval);
	sprintf(JSC_ychar, "%d", JSC_8bit_yval);
	sprintf(JSC_zchar, "%d", JSC_8bit_zval);
}
void JSC_MMA7455_Read_10Bit_X()
{
	HAL_I2C_Mem_Read(&hi2c1, JSC_MMA7455_I2C_ADDRESS, JSC_MMA7455_10bit_x_reg_low, 2, pJSC_10bit_xval, 2, 10000);
	sprintf(JSC_xchar, "%d", JSC_10bit_xval);
}
void JSC_MMA7455_Read_10Bit_Y()
{
	HAL_I2C_Mem_Read(&hi2c1, JSC_MMA7455_I2C_ADDRESS, JSC_MMA7455_10bit_y_reg_low, 2, pJSC_10bit_yval, 2, 10000);
	sprintf(JSC_ychar, "%d", JSC_10bit_yval);
}
void JSC_MMA7455_Read_10Bit_Z()
{
	HAL_I2C_Mem_Read(&hi2c1, JSC_MMA7455_I2C_ADDRESS, JSC_MMA7455_10bit_z_reg_low, 2, pJSC_10bit_zval, 2, 10000);
	sprintf(JSC_zchar, "%d", JSC_10bit_zval);
}

void JSC_MMA7455_Read_10Bit_All()
{
	HAL_I2C_Mem_Read(&hi2c1, JSC_MMA7455_I2C_ADDRESS, JSC_MMA7455_10bit_x_reg_low, 2, pJSC_10bit_xval, 2, 10000);
	HAL_I2C_Mem_Read(&hi2c1, JSC_MMA7455_I2C_ADDRESS, JSC_MMA7455_10bit_y_reg_low, 2, pJSC_10bit_yval, 2, 10000);
	HAL_I2C_Mem_Read(&hi2c1, JSC_MMA7455_I2C_ADDRESS, JSC_MMA7455_10bit_z_reg_low, 2, pJSC_10bit_zval, 2, 10000);
	sprintf(JSC_xchar, "%d", JSC_10bit_xval);
	sprintf(JSC_ychar, "%d", JSC_10bit_yval);
	sprintf(JSC_zchar, "%d", JSC_10bit_zval);

}
