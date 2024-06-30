/*
   Implement your own string concatenation function.
   try calling the string copy function by sending the below as input:
   1) string constant as destination and string variable as source
   2) string variable as destination and string constant as source
   3) string variable as destination and string variable as source
   4) string constant as destination and string constant as source
   note down the output and analyze the reasons.
 */
#include<stdio.h>
#include<string.h>

char* mystrconcate( const char *str1,const char *str2)
{
	int len=strlen(str1);
	int i=0;
	while(str2[i]!='\0')
	{
		str1[len+i]=str2[i];
		i++;
	}
	str1[len+i]='\0';
	return str1;
}
int main()
{
	char s1[100];
	const char *str1="Give Thanks",*str2 ="Give Thanks";
	printf("Enter string :\n");
	scanf(" %99[^\n]",s1);
	char *result=mystrconcate(s1,str1);
	printf("%s\n",result);
	return 0;
}
/*
1)************ string constant as destination and string variable as source*********************/
/*3_strconcate.c:19:14: error: assignment of read-only location ‘*(str1 + (sizetype)(len + i))’
     str1[len+i]=str2[i];
                ^
  3_strconcate.c:22:13: error: assignment of read-only location ‘*(str1 + (sizetype)(len + i))’
    str1[len+i]='\0';
               ^
*/
  /*******************  2) string variable as destination and string constant as source*****************/
/*Enter string :
Everything
EverythingGive Thanks*/

/*************************3) string variable as destination and string variable as source**************/
/*Enter string :
Everything
EverythingGive Thanks
*/
/************************4) string constant as destination and string constant as source*****************/
/*
3_strconcate.c:19:14: error: assignment of read-only location ‘*(str1 + (sizetype)(len + i))’
   str1[len+i]=str2[i];
              ^
3_strconcate.c:22:13: error: assignment of read-only location ‘*(str1 + (sizetype)(len + i))’
  str1[len+i]='\0';
             ^
*/
