#include<stdio.h>
//static int x;
int fun();
int fun1();
//int fun();
int main()
{
static int x;
printf("main:%d %p\n",x,&x);
fun ();
fun();
printf("main:%d %p\n",x,&x);
fun1();
}

int fun()
{
extern int x;
x++;
printf("fun:%d %p\n",x,&x);
}
