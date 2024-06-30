//7) Try to send a character array / character pointer / string constant as arguments and see what is the size returned, and understand the difference./

#define SIZEOF(type) ((char*)(&type+1)) - ((char*)(&type))
#include<stdio.h>
int main()
{
	char arr[]="chandu";
	char *ptr=arr;
	char *str="Chandu";
	printf("Size of array: %ld bytes\n", SIZEOF(arr));
	printf("Size of char pointer: %ld bytes\n", SIZEOF(ptr));
	printf("Size of string constant: %ld bytes\n", SIZEOF(str));

return 0;
}
