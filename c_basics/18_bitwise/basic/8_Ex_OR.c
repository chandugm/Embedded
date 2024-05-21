//8. WAP implements XOR functionality without using XOR(^) operator.
#include<stdio.h>
int main()
{
int a,b;
printf("Enter two values :");
scanf("%d%d",&a,&b);
printf("Ex-OR :%d\n",((~a)&b)+(a&(~b)));
return 0;
}
