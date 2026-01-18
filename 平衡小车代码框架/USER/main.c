#include "led.h"
#include "delay.h"
#include "sys.h"
#include "pwm.h"
#include "tim.h"
#include "encode.h"
#include "motor.h"
#include "mpu6050.h"

int main(void)
{	
	uart_init(115200);
	delay_init();
	IIC_Init();
	MPU6050_initialize();     
	DMP_Init();       
	LED_Init();
	TIM4_PWM_Init(3000-1,0); 
	
	delay_ms(500);
	
	TIM2_ENCODE_Init();	
	
	delay_ms(500);
	
	TIM1_Init(1000-1,72-1); 
	while(1)     
	{
		delay_ms(1000);
	}
}
