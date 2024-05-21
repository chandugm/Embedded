/*Read a character and print if the given character is an alphabet or not*/

#include<stdio.h>
int main(){
char c;
printf("Enter a character : ");
scanf("%c",&c);
if (c>=97){
	if(c<=122)
		printf("it is alphabet");
	else
		printf("not alphabet");
}
else if(c>=65){
	if(c<=90)
		printf("it is alphabet");

	else
	printf("not alphabet");
}
else{
printf("not alphabet");}
return 0;
}
