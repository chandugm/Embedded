/*7)Write a function that takes a main string and two sub strings (need not be same length), and replace every occurrence of first substring with the second substring in main string and return a new string as output.

  eg., input : kernel  e   xxx

output: kxxxrnxxxl
 */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char* strreplace(char *str,char* s1,char* s2);

int main()
{
	char *str,*s1,*s2;
	str=(char *)calloc(10,sizeof(char));
	s1=(char *)calloc(10,sizeof(char));
	s2=(char *)calloc(20,sizeof(char));
	if(str==NULL||s1==NULL || s2==NULL)
	{
		printf("Memory not allocated\n");
		exit(1);
	}
	printf("Enter string \n");
	scanf(" %9[^\n]s",str);
	printf("Enter string 1\n");
	scanf(" %9[^\n]s",s1);
	printf("Enter sourse string2 \n");
	scanf(" %19[^\n]s",s2);

	char *result=strreplace(str,s1,s2);
	if(result==NULL)
	{
		printf("Memory not allocated\n");
		exit(1);

	}
	printf("%s",result);
	free(result);
	return 0;
}
char* strreplace(char *str,char* s1,char* s2)
{
	int len=strlen(str);
	int s1len=strlen(s1);
	int s2len=strlen(s2);
	int index=0;
	char *s3;
	s3=(char*)calloc(50,sizeof(char));
	if(s3==NULL)
	{
		printf("Memory not allocated\n");
		exit(1);
	}
	for(int i=0;str[i]!='\0';i++)
	{
		int k=i;
		int j;
		for (j=0;s1[j]!='\0';j++)
		{
			if (str[k]==s1[j])
			{
				k++;				
			}
			else
			{
				break;
			}
		}
		if(j==s1len)
		{
			for(int l=0;l<s2len;l++)
			{
				s3[index++]=s2[l];
			}
			i+=s1len-1;
		}

		else
		{
			s3[index++]=str[i];
		}
	}
	str=realloc(str,50*sizeof(char));
int i;	
for( i=0;s3[i]!='\0';i++)
	{
		str[i]=s3[i];
	}
str[i]='\0';
	free(s3);
	free(s1);
	free(s2);
	return str;
}

