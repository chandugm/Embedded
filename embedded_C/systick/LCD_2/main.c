#include "lcd.h"
#include "systicktimer.h"

int main()
{
	// Initalization & Configuration
	KM_SysTick_Init();// Basic hardware initalization is first
	LCD_init();

	
	// Operations
	LCD_write_str("Kernel masters");
	return 0;
} 


