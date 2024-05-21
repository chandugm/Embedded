/*Write a program to find the biggest of two numbers using the conditional operator*/
#include<stdio.h>
int main()
{
int a,b;
printf("Enter two numbers : ");
scanf("%d%d",&a,&b);
a>b?printf("Biggest is a"):printf("Biggest is b");
return 0;
}
