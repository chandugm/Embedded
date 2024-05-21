#include<stdio.h>
int main()
{
	int y1,m1,d1,y2,m2,d2;
	printf("enter 1st date of birth:");
	scanf("%d-%d-%d",&d1,&m1,&y1);
	printf("enter 2nd date of birth:");
	scanf("%d-%d-%d",&d2,&m2,&y2);
	if (m1==2 || m2==2){
		if (d1>29 || d2>29){
			return 0;
		}
		}
	if(y2>y1)
		{
			printf("%d-%d-%d\n",d1,m1,y1);
		}
	else if(y2<y1)
		{
			printf("%d-%d-%d\n",d2,m2,y2);
		}
	else if(m2>m1)
		{
			printf("%d-%d-%d\n",d1,m1,y1);
		}
	else if(m2<m1)
		{
			printf("%d-%d-%d\n",d2,m2,y2);
		}
	else if(d2>d1)
		{
			printf("%d-%d-%d\n",d1,m1,y1);
		}
	else if(d2<d1)
		{
			printf("%d-%d-%d\n",d2,m2,y2);
		}
	else 
		{
			printf("%d-%d-%d\n",d1,m1,y1);
		}
}
