//Define a sizeof macro that will find the size of a given data type as a parameter. use pointers.
#include <stdio.h>

#define SIZEOF(type) ((char*)((type* )0 +1)- (char*)((type*)0))

int main() 
{
	printf("Size of int: %ld bytes\n", SIZEOF(int));
	printf("Size of double: %ld bytes\n", SIZEOF(double));
	printf("Size of char: %ld bytes\n", SIZEOF(char));
	printf("Size of float: %lu bytes\n", SIZEOF(float));
	printf("Size of long: %lu bytes\n", SIZEOF(long));
	printf("Size of short: %lu bytes\n", SIZEOF(short));
	return 0;
}

