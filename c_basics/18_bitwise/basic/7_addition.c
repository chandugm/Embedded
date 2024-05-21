//7. WAP implements addition functionality without using ADD('+') Operator
#include<stdio.h>
int main()
{
int num1,num2,sum=0,carry=0;
printf("Enter two numbers :");
scanf("%d%d",&num1,&num2);
/*while(num2!=0)
{
num1=num1^num2;
carry=(num1&num2);
num2=carry<<1;}*/
num2=(~num2)+1;
printf("After addition :%d\n",num1-num2);
//printf("After subtraction :%d\n",sum^carry);
return 0;
}

