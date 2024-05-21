//8 Take three input integers x,y and z. Write a program to rotate their values such that, x has the value of y, y has the value of z and z has the value of x. Do this using pointers that point to x,y and z.
#include<stdio.h>
int main()
{
	int x,y,z,*p1=&x,*p2=&y,*p3=&z;
	printf("Enter three numbers");
	scanf("%d%d%d",p1,p2,p3);
	printf("x=%d y=%d z=%d\n",*p1,*p2,*p3);
	*p1=*p1+*p2+*p3;
	*p3=*p1-*p2-*p3;
	*p2=*p1-*p2-*p3;
	*p1=*p1-*p2-*p3;
	printf("x=%d y=%d z=%d\n",*p1,*p2,*p3);
	return 0;
}
