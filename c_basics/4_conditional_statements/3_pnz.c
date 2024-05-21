//C program to check whether a number is positive, negative or zero
#include<stdio.h>
int main()
{
int a;
printf("Enter a number : ");
scanf("%d",&a);
if (a==0)
	printf("Given number is zero\n");
else if (a>0)
	printf("Given number is Positive\n");
else
	printf("Given number is negitive\n");
return 0;
}
