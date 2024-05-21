/*Read a 4 digit integer into a variable, using scanf and print it in the below format using escape sequences.
eg., input: 3467

output : 
3
34
346
3467

3
  4
     6
        7*/

#include<stdio.h>
int main(){
int a;
printf("Enter a four digit number:");
scanf("%d",&a);
printf("%d\n",a/1000);
printf("%d\n",a/100);
printf("%d\n",a/10);
printf("%d\n\n\n",a);
printf("%1d\n",(a/1000));
printf("%2d\n",(a/100)%10);
printf("%3d\n",(a/10)%10);
printf("%4d\n",(a%10));
return 0;
}




