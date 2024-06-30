/*
   5) Implement your own string reverse function using the above swap function to swap the edges while reversing.
   try calling the string reverse function using
   1) string variable
   2) string constant

   note down the output and analyze the reasons.
 */
#include<stdio.h>
#include<string.h>
void myswap(char *s1,char *s2)
{
	char temp=*s1;
	*s1=*s2;
	*s2=temp;
}
void reverse(char *str,int start,int end)
{

	for(int i=start,j=end-1;i<j;i++,j--)
	{
		myswap(&str[i],&str[j]);
	}

}
int main()
{
	char str[100];const char *str1="chandu";
	printf("Enter a string :\n");
	scanf(" %99[^\n]s",str);
	int start=0,end=strlen(str1);
	reverse(str,start,end);
	printf("%s\n",str);
	return 0;
}
