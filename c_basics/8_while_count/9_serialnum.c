/*Read two numbers from the user, and print all serial numbers between those numbers.
eg., inputs: 10   20
output: 10 11 12 13 14 15 16 17 18 19 20*/
#include<stdio.h>
int main()
{
int num1,num2;
printf("Enter two numbers :");
scanf("%d%d",&num1,&num2);
while(num1<=num2)
{
printf("%d ",num1);
num1++;
}
return 0;
}
