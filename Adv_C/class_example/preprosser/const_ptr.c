#include<stdio.h>
int main()
{
int x=5,y=11;
//const int *ptr=&x ;
//int const *ptr=&x ;
int *const ptr=&x ;
x=22;
printf("%d\n",x);
//*ptr=10; error: assignment of read-only location ‘*ptr’
printf("%d\n",x);
//ptr=&y;
//*ptr=y; error: assignment of read-only location ‘*ptr’
//printf("%d\n",y);
return 0;
}
