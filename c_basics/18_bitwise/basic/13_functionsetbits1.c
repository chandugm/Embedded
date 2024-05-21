#include<stdio.h>
void functionsetbits(int,int,int,int);
void printbinary(int,int);
int main()
{
	int x,y,n,p;
	printf("enter two number:");
	scanf("%d%d",&x,&y);
	printf("enter value and position:");
	scanf("%d%d",&n,&p);
	printf("x:");
	printbinary(x,sizeof(char));
	printf("y:");
	printbinary(y,sizeof(char));
	printf("setbits n = %d, p = %d gives x =",n,p);
	functionsetbits(x,y,n,p);
}
void functionsetbits(int x,int y,int n,int p)
{
	int result,temp=p;
	for(int i=n-1;i>=0;i--)
	{
		x=x&(~(0x01<<--p));
	}
		y=y<<(temp-n);
	result=x|y;
	printbinary(result,sizeof(char));
}
void printbinary(int x,int s)
{
        for(int i=s*8-1;i>=0;i--)
        {
                if(x&(0x01<<i))
                {
                        printf("1");
                }
                else
                        printf("0");
        }
        printf("(binary)\n");
}
