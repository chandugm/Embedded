//3) Write a function that can rotate the values of three variables. print the results in the main function.
#include<stdio.h>
void rotate(int *p1,int *p2,int *p3);
int main()
{
	int x,y,z;
	printf("Enter three numbers");
	scanf("%d%d%d",&x,&y,&z);
	printf("Before:x=%d y=%d z=%d\n",x,y,z);
	rotate(&x,&y,&z);
	printf("After:x=%d y=%d z=%d\n",x,y,z);
	return 0;
}
void rotate(int *p1,int *p2,int *p3)
{
	*p1=*p1+*p2+*p3;
	*p3=*p1-*p2-*p3;
	*p2=*p1-*p2-*p3;
	*p1=*p1-*p2-*p3;
}

