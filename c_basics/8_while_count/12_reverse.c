/*Read two numbers from the user, and print all numbers in reverse order.

eg., inputs: 10   20
output:
20 19 18 17 16 15 14 13 12 11 10 */
#include<stdio.h>
int main()
{
int num1,num2;
printf("Enter two numbers :");
scanf("%d%d",&num1,&num2);
while(num2>=num1)
{
printf("%d ",num2);
num2--;
}
return 0;
}
