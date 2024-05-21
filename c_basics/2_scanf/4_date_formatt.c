/*read a date in the below format, and print it back in another format:

eg., input : 4-5-2000

output: 4/5/2000*/

#include<stdio.h>
int main(){
int a,b,c;
printf("Enter the date in the given format only dd-mm-yyyy: ");
scanf("%d-%d-%d",&a,&b,&c);
printf("%d/%d/%d\n",a,b,c);
return 0;
}
