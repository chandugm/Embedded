//6. WAP implements subtraction functionality without using SUB('-') Operator.  
#include<stdio.h>
int main()
{
int num1,num2;
printf("Enter two numbers :");
scanf("%d%d",&num1,&num2);
num2=(~num2)+1;
printf("After subtraction :%d\n",num1+num2);
return 0;
}
