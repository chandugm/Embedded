/*check if a character is vowel or not*/
#include<stdio.h>
int main()
{
char ch;
printf("Enter a character : ");
scanf("%c",&ch);
ch==('A')?printf("vowel"): ch =='a'?printf("vowel"):ch =='e'?printf("vowel"):ch =='E'?printf("vowel"):ch=='i'?printf("vowel"):ch==('I')?printf("vowel"): ch =='o'?printf("vowel"):ch=='O'?printf("vowel"):ch==('u')?printf("vowel"): ch =='U'?printf("vowel"):printf("not vowel");
return 0;
}
