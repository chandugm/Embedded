#include "stm32f401rbt6.h"
#include "systicktimer.h"
#include "UART.h"
#include "wifi.h"
extern int res;
int main()
{
	//init
	KM_SysTick_Init();
	UART6_init();

ESP8266_init();
	
	while(1)
	{
	KM_mdelay(5000);
	ESP8266_Tx();
}
	}

