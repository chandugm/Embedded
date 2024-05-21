#include "stm32f401rbt6.h"
int i;
void KM_SysTick_Init(void)
{
	STK_CTRL		|= 0x01<<2; // clock source is AHB (16MHZ)
	STK_CTRL		&= ~(0x01<<1); // Interrupt disable
}
void KM_mdelay(int n)
{
		STK_LOAD 	=(16000-1); // load 1msec value
		STK_CTRL		|=  (0x01<<0); // Enable Timer
	
	for (i=0;i<n;i++)  //to generate required delay (from Sys tick timmer maximum value is 1.04)
	{
		while(1)//checking 16th bit if the counter reach to ZERO set counter flag
		{
			if(STK_CTRL	& (0x1<<16))
			{
				break;
			}
			
		}
		STK_VAL = 0x123;// write any value clears the COUNT FLAG
}
}
void KM_udelay(int n)
{
		STK_LOAD 	=(16-1);
		STK_CTRL		|= (0x01<<0); // Enable Timer
	for (i=0;i<n;i++)  //to generate required delay (from Sys tick timmer maximum value is 1.04)
	{
		while(1)//checking 16th bit if the counter reach to ZERO set counter flag
		{
			if(STK_CTRL	& (0x1<<16))
			{
				break;
			}
		}
		STK_VAL = 0x123;// write any value clears the COUNT FLAG

}
	}



