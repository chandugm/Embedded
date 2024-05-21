//6 declare different pointers with different data types. Print the sizes of the pointer variables using sizeof operator. Why do u think all of them are giving same size irrespective of the data type ?
#include<stdio.h>
#include<stdlib.h>
int main()
{
int *iptr=NULL;//intialised with null because unintialized pointer is dangerous
char *cptr=NULL;//intialised with null because unintialized pointer is dangerous
float *fptr=NULL;//intialised with null because unintialized pointer is dangerous
double *dptr=NULL;//intialised with null because unintialized pointer is dangerous
printf("size of iptr =%lu\nAddress of (*iptr)=%lu\n",sizeof(iptr),sizeof(*iptr));
printf("size of cptr =%lu\nAddress of (*cptr)=%lu\n",sizeof(cptr),sizeof(*cptr));
printf("size of fptr =%lu\nAddress of (*fptr)=%lu\n",sizeof(fptr),sizeof(*fptr));
printf("size of dptr =%lu\nAddress of (*dptr)=%lu\n",sizeof(dptr),sizeof(*dptr));
printf("When you run this code, you'll likely"" find that all pointer sizes are the same, typically 4 or 8 bytes"" depending on whether you're on a 32-bit or 64-bit system. ""This is because the size of a pointer is determined by the memory address space ""of the system and not by the type of data it points to." "Pointers are used to store memory addresses, and memory addresses themselves are typically"" the same size regardless of the type of data they point to.\n");
return 0;
}

