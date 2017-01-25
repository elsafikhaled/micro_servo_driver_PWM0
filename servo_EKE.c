/*
 * servo_EKE.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: El-safi
 */

#include "servo_EKE.h"

void SERVO_EKE_init(void)
{
	PWM1_EKE_init();
}

void servo_angle(U8_t angle)
{
  if(angle>180)angle=180;
  else if(angle<0)angle=0;

   switch(angle)
   {
     case 0:
    	 PWM1_EKE_duty(600);
         _delay_ms(10);break;
     case 45:
    	 PWM1_EKE_duty(1030);
         _delay_ms(10);break;
     case 90:
         PWM1_EKE_duty(1460);
         _delay_ms(10);break;
     case 135:
    	 PWM1_EKE_duty(2005);
         _delay_ms(10);break;
     case 180:
         PWM1_EKE_duty(2550);
          _delay_ms(10);break;

     default :
    	 PWM1_EKE_duty(600);
    	 _delay_ms(10);break;
   }


}

void servo_start(void)
{
  PWM1_EKE_start();
}

void servo_stop(void)
{
	PWM1_EKE_stop();
}
