/*2) Write the following program :
Declare a character array without size.
Initialize the array with characters of your name.
Print your name using for loop.*/
#include<stdio.h>
int main()
{
char c[]={'c','h','a','n','d','u'};
int s=sizeof (c);
printf("%d\n",s);
for (int i=0;i<s;i++)
{
printf("%c",c[i]);
}
printf("\n");
return 0;
}
