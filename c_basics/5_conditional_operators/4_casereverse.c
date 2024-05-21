/*Input an alphabet. Output its case reverse.*/
#include<stdio.h>
int main(){
char ch;
printf("Enter a alphabet : ");
scanf("%c",&ch);
ch>=97?ch<=122?printf("%c",ch-32):printf("in valid character"):ch>=65? ch<=90?printf("%c",ch+32):printf("in valid character"):printf("in valid character");
return 0;
}
