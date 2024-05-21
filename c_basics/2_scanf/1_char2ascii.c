/*Read a character and print its ascii value.*/
#include<stdio.h>
int main(){
char c;
printf("Enter a charcter value to find ascii num:");
scanf("%c",&c);
printf("Ascii value of '%c' is:%d",c,c);
return 0;
}
