//1 Write a program to print the address of a variable , its value ,its size, try different executions and note the address printed. Assign the address of the variable to a pointer variable.Print the size of pointer and its indirected value (apply * operator).
#include<stdio.h>
#include<stdlib.h>
int main()
{
int x=11,*iptr=NULL;//intialised with null because unintialized pointer is dangerous
char c='c',*cptr=NULL;//intialised with null because unintialized pointer is dangerous
float f=11.11,*fptr=NULL;//intialised with null because unintialized pointer is dangerous
double d=3.52,*dptr=NULL;//intialised with null because unintialized pointer is dangerous
iptr=&x;
cptr=&c;
fptr=&f;
dptr=&d;
printf("_int ptr_");
printf("\nValue of x =%d\nsize of x =%lu\nAddress of x=%p\n",x,sizeof(x),&x);
printf("\nValue of pointer =%d\nSize of iptr =%lu\nSize of (*iptr) =%lu\nAddress of pointer =%p\nAddress of pointer variable =%p\n",*iptr,sizeof(iptr),sizeof(*iptr),iptr,&iptr);
printf("\n _char ptr_");
printf("\nValue of c =%c\nsize of c =%lu\nAddress of c=%p\n",c,sizeof(c),&c);
printf("\nValue of pointer =%c\nSize of cptr =%lu\nSize of (*cptr) =%lu\nAddress of pointer =%p\n",*cptr,sizeof(cptr),sizeof(*cptr),cptr);
printf("\n _float ptr_");
printf("\nValue of f =%f\nsize of f =%lu\nAddress of f=%p\n",f,sizeof(f),&f);
printf("\nValue of pointer =%f\nSize of fptr =%lu\nSize of (*fptr) =%lu\nAddress of pointer =%p\n",*fptr,sizeof(fptr),sizeof(*fptr),fptr);
printf("\n_double ptr_");
printf("\nValue of d =%lf\nsize of d =%lu\nAddress of d=%p\n",d,sizeof(d),&d);
printf("\nValue of pointer =%lf\nSize of dptr =%lu\nSize of (*dptr) =%lu\nAddress of pointer =%p\n",*dptr,sizeof(dptr),sizeof(*dptr),dptr);
return 0;
}
