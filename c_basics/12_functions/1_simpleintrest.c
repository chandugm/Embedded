/* Write a function to calculate simple interest. Call it in main function with appropriate inputs and print the total amount the user will get after the tenure (principle + interest)*/
#include<stdio.h>
int simpleintrest(int p,int t,float r)
{
	float si;
	si=(float)(p*t*r)/100;
	return si;
}
int main()
{
	int p,t;
	float r,si;
	scan:printf("Enter Amount,time in years,intrest :");
	scanf("%d%d%f",&p,&t,&r);
	//	si=simpleintrest(p,t,r);
	if (t==0 || p==0 )
	{
		printf("Invalid data\n");
		goto scan;
	}
	else if (r==0)
	{
		printf("Your intrest is Zero & Your debt:%d\n",p);
		goto scan;
	}
	else
	{
		si=simpleintrest(p,t,r);
	
		printf("intest:%.2f\nTotal debt:%.2f\n",si,(float)si+p);
	}
	return 1;
}
