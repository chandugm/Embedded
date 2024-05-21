/*write a function that can take an integer as input and return 1 if the number is prime number,  return 0 if it is not prime and print appropriate output message in main according to output.
return type is integer. function name IsPrime - returns int (0 or 1)
 */
#include<stdio.h>
int Isprime(int num)
{
	int i,cn=0;
	for (i=1;i<=num;i++)
	{
		if (num%i==0)
		{
			cn+=1;	

		}
	}
	if (cn==2)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int num,p;
	do
{
	printf("Enter positive number only :");
	scanf("%d",&num);
}
	while(num<=0);
	if (num==1)
{
printf("1 is neither prime nor conjugate\n");
}
else
{

	p=Isprime(num);
	if (p==1)
	{
		printf("prime number\n");
	}
	else
	{
		printf("Not prime\n");
	}
}
	return 0;
}
