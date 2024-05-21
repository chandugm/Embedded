/*
Write a program to implement generic delay functions using Sys Tick timer with polling method.
void KM_mdelay(int );  
void KM_udelay(int );  
*/
void KM_mdelay(int n);
void KM_udelay(int n);
int main()
{
	RCC_AHB1ENR |= ((0x1)<<1); //Set PORT-B(bit position 1) in RCC
	STK_CTRL		|= (0x1<<2);//set 2nd bit in STK_CTRL for 16MHz frequency
	STK_CTRL		&= ~(0x1<<1);//clearing first bit to select polling method 
	KM_mdelay(100);//100 millisec delay
	KM_udelay(100);//100 micro sec delay
}

void KM_mdelay(int n)
{
		STK_CTRL		&= ~(0x01<<1);
		STK_LOAD 	=(16000-1)*n;
		STK_CTRL		|= (0x01<<0);
			
		
		while(!(STK_CTRL	& (0x1<<16)))//checking 16th bit if the counter reach to ZERO set counter flag
		{
			;
		}
}
void KM_udelay(int n)
{
		STK_LOAD 	=(16-1)*n;
		STK_CTRL		|= (0x01<<0);
			
		
		while(!(STK_CTRL	& (0x1<<16)))//checking 16th bit if the counter reach to ZERO set counter flag
		{
			;
		}
}
