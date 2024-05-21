/*3. Write a printbinary(int , int ) function consists of 2 integer variables. First one is value of the variable and second one is  size of variable. 
Example: 
char x=5; 
printbinary(x,sizeof(x)); 
output:  00000101
*/
#include<stdio.h>
void printbinary(int,int);
int main()
{
	int a;
	printf("Enter a number :");
	scanf("%d",&a);
	printbinary(a,sizeof(char));
	printbinary(a,sizeof(short int));
	printbinary(a,sizeof(int));
	return 0;
}
void printbinary(int a,int size)
{
	for (int i=(size*8)-1;i>=0;i--)
	{
		if(a&(0x1<<i))
			printf("1");
		else 
			printf("0");
	}
	printf("\n");
}
