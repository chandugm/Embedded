 //char * strstr(char str[], char sub[]); //returns the address of the character in the main string from where the substring is matching.
#include<stdio.h>
#include<string.h>
char *mystrstr(char str[],char sub[]);
int main()
{
	char str[100],sub[100];
	printf("Enter a string :");
	scanf("%99[^\n]",str);
	getchar();
	printf("Enter a sub-string :");
	scanf("%99[^\n]",sub);
	char *i=mystrstr(str,sub);
	if (i==NULL) printf("Not found \n");
	else printf("index :%ld",i-str);
	return 0;
	
	
}
char *mystrstr(char str[],char sub[])
{

	int len=strlen(sub);
	for(int i=0;*(str+i)!='\0';i++)
	{	int j;
		int k=i;
		for ( j=0;*(sub+j)!='\0';j++)
		{
			if (*(str+k)==*(sub+j))
			{
			k++;	
			}
			else
			{
				break;
			}
		}

		if (j==len)
		{
			return (str+i);
		}
	}
return NULL;
}

