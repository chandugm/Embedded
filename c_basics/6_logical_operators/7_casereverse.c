/* Input an alphabet. Output its case reverse.
eg., input: a
output: A
input: U
output: u
input: 4
output: not an alphabet
using conditional operator & logical operator*/

#include<stdio.h>
int main()
{
char ch;
printf("Enter an alphabet :");
scanf("%c",&ch);
(ch>=97 && ch<=122)?printf("%c\n",ch-32):(ch>=65 && ch<=90)?printf("%c\n",ch+32):printf("Not an alphabet");
return 0;
}
