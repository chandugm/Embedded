#include "stm32f401rbt6.h"
#include "systicktimer.h"
#include "LCD.h"
#include "ADC.h"
extern int flag,temp;
int main()
{
	//intialization
	KM_SysTick_Init();
	LCD_Mux_init();
	LCD_init();
	ADC_Mux_init();
	ADC_init();
	

	//operation	
	
	while(1)
{
	KM_mdelay(1048);//delay 5sec
	//SWSTART
	ADC_CR2 |=0x1<<30;//set 30th bit SWSTART
	if (flag==1)
	{
	print_LCD();//printing in LCD LM35 value 
		flag=0;
	}
}
}

