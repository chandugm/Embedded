//3) Write a program to reverse a string , using index method.
#include<stdio.h>
void strrev(char *str,char *ptr)
{
char c;
if(str>=ptr)
return;
c=*str;
*str=*ptr;
*ptr=c;
strrev(++str,--ptr);
}
