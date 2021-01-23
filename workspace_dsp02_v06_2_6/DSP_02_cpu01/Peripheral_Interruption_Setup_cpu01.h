/*
 * Peripheral_Setup.h
 *
 *  Created on: 17 de ago de 2020
 *      Author: xluca
 */

#ifndef PERIPHERAL_INTERRUPTION_SETUP_CPU01_H_
#define PERIPHERAL_INTERRUPTION_SETUP_CPU01_H_
#include "F28x_Project.h"

//ADCs
void ConfigureADC(void);

//Dac
void Setup_DAC(void);

//EPW
void ConfigureEPWM(void);

//GPIo
void  GPIO_Configure(void);

//Interrupções
__interrupt void adcb1_isr(void);
__interrupt void IPC1_INT(void);




#endif /* PERIPHERAL_INTERRUPTION_SETUP_CPU01_H_ */
