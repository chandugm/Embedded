#include "stm32f401rbt6.h"
#include "systicktimer.h"
#include "UART.h"
#include "wifi.h"
char ch;
int main()
{
	//init
	KM_SysTick_Init();
	UART6_init();
	ESP8266_init();
	ESP8266_module();
	while(1)
{
;
}
	//ch=UART6_InChar();	//reading data from data reg
}

