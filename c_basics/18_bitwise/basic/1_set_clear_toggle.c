//1. Write a program to Set, clear and toggle particular bit using bit wise operator?
#include<stdio.h>
int main()
{
int a,p;
printf("Enter value and position:");
scanf("%d%d",&a,&p);
printf("After set-hex=%X  dec:%d\n",a|(0x1<<p),a|(0x1<<p));
printf("After reset-hex=%X  dec:%d\n",(a&(~(0x1<<p))),~(a&(~(0x1<<p))));
printf("After toggle-hex=%X  dec:%d\n",a^(0x1<<p),a^(0x1<<p));
return 0;
}


