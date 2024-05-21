#include<stdio.h>
int x;
int fun();
int fun1();
int main()
{
extern int x;
//static int x;
//extern int x;
printf("main:%d %p\n",x,&x);
fun();
fun();
fun1();
printf("main:%d %p\n",x,&x);
}
//int x;
int fun()
{
x++;
printf("fun:%d %p\n",x,&x);
}
