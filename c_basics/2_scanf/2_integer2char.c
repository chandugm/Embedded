/*Read an integer and print the corresponding character.*/
#include<stdio.h>
int main(){
int a;
printf("Enter an integer value to print corresponding char:");
scanf("%d",&a);
printf("character of given int value '%d' is: %c\n",a,a);
return 0;
}
