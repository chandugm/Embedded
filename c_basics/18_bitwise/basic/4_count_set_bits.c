//4. WAP to count the bits set (bit value 1 ) in an integer? Find out and compare different possibilities?
#include<stdio.h>

int main()
{
	int a,cn=0,cn1=0;
	printf("Enter a number :");
	scanf("%d",&a);
	printf("*********Bitwise AND***********\n");
	for (int i=(sizeof(a)*8)-1;i>=0;i--)
	{
		if(a&(0x1<<i))
			cn++;
	}
	printf("Count of set bit values are :%d\n\n",cn);
	printf("************Bitwise right shift****************\n");
	for (int i=(sizeof(a)*8)-1;i>=0;i--)
	{
		if (a&(0x1))
			cn1++;
		a>>=0x1;	
	}		
	printf("Count of set bit values are :%d\n",cn1);
return 0;		
}
/*
Comparison:

Both methods aim to count the number of set bits (bit value 1) in the input number.
The bitwise AND operation approach directly checks each bit position using a bitmask and bitwise AND operation.
The bitwise right shift operation approach checks the least significant bit of the input number and then right shifts the number to move to the next bit position.
The bitwise AND operation approach is more straightforward and doesn't modify the input number (a).
The bitwise right shift operation approach modifies the input number (a) by right shifting it.

Conclusion:

Both approaches achieve the same result of counting the number of set bits.
The bitwise AND operation approach is simpler and more efficient, as it doesn't modify the input number. Therefore, it is preferable in terms of clarity and performance.

*/
