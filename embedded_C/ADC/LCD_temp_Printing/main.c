#include "stm32f401rbt6.h"
#include "systicktimer.h"
#include "header.h"
int main()
{
	//intialization
	KM_SysTick_Init();
	LCD_intit();
	LM_init();
}

