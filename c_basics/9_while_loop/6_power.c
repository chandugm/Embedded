/*Write a program to find the power of a number to the given number.
eg.,input : 3 5
output: 3 to the power of 5 -> 243
*/
#include<stdio.h>
int main()
{
int i=1,num1,num2,mul=1;
printf("Enter two numbers to find power :");
scanf("%d%d",&num1,&num2);
while(i<=num2)
{
mul*=num1;
i++;
}
printf("%d to the power of %d →  %d\n",num1,num2,mul);
return 0;
}
