#include "stm32f401rbt6.h"
#include "systicktimer.h"
void LM_init();//declaration
int main()
{
	//intialization
	KM_SysTick_Init();
	LM_init();
	
}

