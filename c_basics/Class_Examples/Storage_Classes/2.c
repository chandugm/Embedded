#include<stdio.h>
int x;
int fun();
int main()
{
//extern int x;
printf("%d %p\n",x,&x);
fun();
fun();
printf("%d %p\n",x,&x);
}
int x;
int fun()
{
x++;
printf("%d %p\n",x,&x);
}
