#include<stdio.h>
static int x;
//int x;
int fun1()
{
//int x;
//extern int x;
x++;
printf("fun1:%d %p\n",x,&x);
}

