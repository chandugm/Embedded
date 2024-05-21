#include<stdio.h>
int main()
{
	int n,i=1,sign=1;
	float result=0;
	printf("Enter a number");
	scanf("%d",&n);
	while(i<=n)
	{
		if (i==1){
			result+=i;
			printf("%d",i);
			i++;
		}
		if (i%2==0 && i<=n)
		{
			sign*=-1;
			result+=(float)sign/i;
			printf("-1/%d",i);
			sign*=-1;
			i++;
		}
		if (i%2!=0 && i<=n)
		{
			result+=(float)sign/i;
			printf("+1/%d",i);
			i++;
		}
		
	}
	printf(" = %.2f",result);
	return 0;
}

