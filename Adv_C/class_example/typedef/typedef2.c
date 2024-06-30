#include<stdio.h>
int main()
{
int b=5;
typedef int *ptr;
ptr a;
a=&b;
printf("%d",*a);
}
