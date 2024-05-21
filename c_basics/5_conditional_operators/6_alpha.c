/*check if a character is alphabet or not*/
#include<stdio.h>
int main()
{
char ch;
printf("Enter a character : ");
scanf("%c",&ch);
ch>=97? ch<=122?printf("Alphabet\n"):printf("not alphabet\n"):ch>=65? ch<=90?printf("alphabet\n"):printf("not alphabet\n"):printf("not alphabet\n");
return 0;
}
