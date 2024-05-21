#include<stdio.h>
float simpleintrest(int p,int n,float r)
{
	float y,si;
	y=n/12.0;

	if (y==0)
	{
		return 0;
	}
	if (r==0)
	{
		return p;
	}
	si=(float)(p*r*y)/100;
	return si;
}
int main()
{
	int p,n;
	float r,si;
	printf("Enter principle,months,rate :");
	scanf("%d%d%f",&p,&n,&r);
	si=simpleintrest(p,n,r);
	
	if (si==0 || n<1)
	{
		printf("please check your data");
	}
	else if (r==0)
	{
		printf("your intrest is zero  and your debt is :%d",p);
	}
	else
	{
		printf("intrest:%.2f and Principle Amount:%d Total Amount:%.2f",si,p,si+p);
	}
	return 0;
}

