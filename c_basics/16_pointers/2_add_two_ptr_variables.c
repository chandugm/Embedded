//2 Write a program to add two variables using their pointers.
#include<stdio.h>
#include<stdlib.h>
int main()
{
int a,b,*aptr=NULL,*bptr=NULL;
printf("Enter a&b values :");
scanf("%d%d",&a,&b);
aptr=&a;
bptr=&b;
printf("Addtion of a+b=%d\n",*aptr+*bptr);
return 0;
}
