/*
 * MMA7455.h
 *
 *  Created on: May 17, 2018
 *      Author: dok
 */

#ifndef MMA7455_H_
#define MMA7455_H_

#define JSC_MMA7455_address						((uint8_t)0x1d<<1)
#define JSC_MMA7455_2g_init_byte				((uint8_t)0x15)
#define JSC_MMA7455_4g_init_byte				((uint8_t)0x19)
#define JSC_MMA7455_8g_init_byte				((uint8_t)0x11)
#define JSC_MMA7455_init_reg					((uint8_t)0x16)
#define JSC_MMA7455_8bit_x_reg					((uint8_t)0x06)
#define JSC_MMA7455_8bit_y_reg					((uint8_t)0x07)
#define JSC_MMA7455_8bit_z_reg					((uint8_t)0x08)


void JSC_MMA7455_Init();
void JSC_MMA7455_Read_8Bit_X();
void JSC_MMA7455_Read_8Bit_Y();
void JSC_MMA7455_Read_8Bit_Z();



#endif /* MMA7455_H_ */
