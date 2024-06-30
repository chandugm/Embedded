#include<stdio.h>
typedef int cal (int x,int t);
cal add,sub;

int main()
{
	int x=22;
	typedef int INT;//giving Nick name to int 
	INT y=11;
	printf("x=%d z=%d\n",x,y);
	int result=add(x,y);
	printf("%d\n",result);
	return 0;
}
int add(int x,int y)
{
return x+y;
}
