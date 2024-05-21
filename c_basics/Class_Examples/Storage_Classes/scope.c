#include<stdio.h>
int c=10;
int fun();
int fun2();
int main()
{
printf("global:%d\n",c);
int c=20;
printf("local:%d\n",c);
fun();
fun();
}
int fun()
{
printf("global:%d\n",c);
c=11;
fun2(11);
}
