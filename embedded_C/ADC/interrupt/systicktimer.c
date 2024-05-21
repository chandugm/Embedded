#include "stm32f401rbt6.h"

void KM_SysTick_Init(void)
{
	STK_CTRL		|= 0x01<<2; // clock source is AHB (16MHZ)
	STK_CTRL		&= ~(0x01<<1); // Interrupt disable
}
void KM_mdelay(int n)
{
		STK_LOAD 	=(16000-1)*n; // load 1msec*n value
		STK_CTRL		|=  (0x01<<0); // Enable Timer
		while(!(STK_CTRL	& (0x1<<16)))//checking 16th bit if the counter reach to ZERO set counter flag
		{
			;
		}
		STK_VAL = 0x123;// write any value clears the COUNT FLAG
}

void KM_udelay(int n)
{
		STK_LOAD 	=(16-1)*n;
		STK_CTRL		|= (0x01<<0); // Enable Timer
		while(!(STK_CTRL	& (0x1<<16)))//checking 16th bit if the counter reach to ZERO set counter flag
		{
			;
		}
		STK_VAL = 0x123;// write any value clears the COUNT FLAG

}
