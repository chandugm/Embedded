/*Read a character and print if the given character is a digit or not*/
#include<stdio.h>
int main()
{
char c;
printf("Enter a character : ");
scanf("%c",&c);
if (c==48){
	if (c==57 )
		printf("it is digit");
	else
		printf("not a digit");
}
else{
	printf("not a digit");
return 0;
}}

