/*Read an integer as input, and print if the given number is even or odd.
eg.,
enter a number: 15
output: 15 is odd number*/
#include<stdio.h>
int main()
{
int a;
printf("Enter a number : ");
scanf("%d",&a);
if (a%2==0)
	printf("Even number");
else
	printf("Odd number");
return 0;
}
