//2) Implement your own string comparison function and try calling the function using two string constants as input arguments.
int mystrcmp(const char *str1,const char *str2)
{
	for(int i=0;str1[i]!='\0'|| str2[i] !='\0';i++)
	{
		if (str1[i]==str2[i])

			continue;

		else
			return str1[i]-str2[i];
	}
}
#include<stdio.h>
int main()
{
	const char *str1="Give",*str2="Thanks";
	int result=mystrcmp(str1,str2);
	if (result>0)
		printf("String one bigger\n");
	else if(result<0)
		printf("string two bigger\n");
	else
		printf("Both are equal\n");
}
/*Demonstration: Using string constants clearly shows how the comparison function behaves without side effects.
  Read-Only Safety: Since the function only reads the input strings and does not modify them, using constants emphasizes the safety of the function.
 */
