/*13. Write a functionsetbits(x,p,n,y)that return x with then bits that begin at position p set to the rightmost n bits of y, leaving the other bits unchanged.
e.g. if x = 10101010 (170 decimal) and y = 10100111 (167 decimal) and n = 3 and p = 6 then
you need to strip off 3 bits of y (111) and put them in x at position 10xxx010 to get answer
10111010. Your answer should print out the result in binary form although input can be in
decimal form.
Your output should be like this:
x = 10101010 (binary)
y = 10100111 (binary)
setbits n = 3, p = 6 gives x = 10111010 (binary).
 */
#include<stdio.h>
void functionsetbits(int,int,int,int);
void binary(int);
int main()
{

	int x,p,n,y;
	printf("Enter x,y values :");
	scanf("%d%d",&x,&y);
	printf("Enter n value and position value :");
	scanf("%d%d",&n,&p);
	printf("x=");
	binary(x);
	printf("y=");
	binary(y);
	functionsetbits(x,p,n,y);
	return 0;
}

void binary(int dec)
{
	for (int i=(sizeof(char)*8-1);i>=0;i--)
	{
		if(dec&(0x1<<i))
			printf("1");
		else 
			printf("0");
	}

	printf("(binary)\n");
}



void functionsetbits(int x,int p,int n,int y)
{
int z=p;
	for (int i=n-1;i>=0;i--)
	{
		if(y&(0x1<<i))
		{

			x=(x|(0x1<<(--p)));
		}

		else	
		{
			x=(x&(~(0x1<<(--p))));

		}

	}


	printf("setbits n = %d, p = %d gives x = ",n,z);
	binary (x);

}

