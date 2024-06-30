//4) Write a swap function to swap the values of two character variables.
#include<stdio.h>
void myswap(char *s1,char *s2)
{
	char temp=*s1;
	*s1=*s2;
	*s2=temp;
}
int main()
{
	char ch1,ch2;
	printf("Enter characters:\n");
	scanf(" %c %c",&ch1,&ch2);
	printf("Before swap %c %c\n",ch1,ch2);
	myswap(&ch1,&ch2);
	printf("After swap %c %c\n",ch1,ch2);
	return 0;
}
