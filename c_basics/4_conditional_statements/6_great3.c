/*Write a program to read 3 numbers and print the biggest of them:
eg.,
enter 3 numbers: 10 16 13
output: 16 is the biggest of given numbers
*/

#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter 3 numbers : ");
scanf("%d%d%d",&a,&b,&c);
if (b>a)
	a=b;
if (c>a)
	a=c;
printf("%d",a);
return 0;
}
