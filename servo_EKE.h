/*
 * servo_EKE.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: El-safi
 */

#ifndef SERVO_EKE_H_
#define SERVO_EKE_H_
#include "PWM1_EKE.h"
#include <util/delay.h>
/******************** MICRO SERVO SG90 CONNECTION *****
 *   PWM  :: ORANGE
 *   VCC  :: RED
 *   GND  :: BROWN
 *
 ********************************************************/

void SERVO_EKE_init(void);
/* ************************************** system initialization *******************************************
 *
 * FUNCTION    :: void SERVO_EKE_init(void);
 *
 * Parameters  :: void
 *
 * Description :: Timer1B initialization for FAST PWM AND non  INVERTING MODE, 16 Bits, 8 prescaler
 *                       1 ms is 0 degree    *** theoritcal OCR1B=1000 but technical is 600 :)
 *                       1.5 ms is 90 degree *** theoritcal OCR1B=1500 but technical is 1460
 *                       2 ms is 180 degree  *** theoritcal OCR1B=2000 but technical is 2550
 *
 *
 * Return      :: void
 *
 * *******************************************************************************************************/
void servo_angle(U8_t angle);
/****************************************************************
 * function    :: void servo_angle(U8_t angle);
 *
 * parameters  :: U8_t angle only (0-->180)
 *
 * description :: calculate the accurate angle for servo postion
 *
 * return      :: void
 ****************************************************************/

void servo_start(void);
/****************************************************************
 * function    :: void servo_start(void);
 *
 * parameters  :: void
 *
 * description :: start timer function to make servo start
 *
 * return      :: void
 *
 ******************************************************************/
void servo_stop(void);
/****************************************************************
 * function    :: void servo_stop(void);
 *
 * parameters  :: void
 *
 * description :: stop timer function to make servo stop
 *
 * return      :: void
 *
 ******************************************************************/


#endif /* SERVO_EKE_H_ */
