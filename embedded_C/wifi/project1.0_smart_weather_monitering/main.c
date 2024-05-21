#include "stm32f401rbt6.h"
#include "systicktimer.h"
#include "LCD.h"
#include "ADC.h"
#include "wifi.h"
#include "UART.h"
extern int flag;
int main()
{
	//intialization
	KM_SysTick_Init();
	LCD_init();
	UART6_init();
	ESP8266_init();
	ADC_init();
	while(1)
	{
		KM_mdelay(5000);
		ADC_CR2|=0x1<<30;//SWATART for conversion
	if (flag==1)
	{
		flag=0;
		print_LCD();//print LCD function
		ESP8266_Tx();
	}
}
}

