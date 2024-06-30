/*Write a function, that takes two strings as input and concatenates only the first n characters from first string and first m characters from second string and makes a new string.
  eg., input str1 = "kernel masters", str2 = "raayan systems", n = 3, m = 5
output : kerraaya
 */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char * concatenate(char *str1,char *str2,int,int);
int main()
{
	char *str1,*str2;
	int n,m;
	str1=malloc(20*sizeof(char));
	str2=malloc(20*sizeof(char));
	if(str1==NULL ||str2==NULL)
	{
		printf("Memory not allocated\n");
		exit(1);
	}

	printf("Enter string 1\n");

	scanf(" %19[^\n]s",str1);

	printf("Enter string 2:\n");
	getchar();

	scanf(" %19[^\n]s",str2);
	printf("Enter n,m values :\n");
	scanf("%d%d",&n,&m);
	char *result=concatenate(str1,str2,n,m);
	if(result==NULL)
	{
		printf("Memory not allocated\n");
		exit(1);
	}
	printf("%s",result);
	free(result);
	return 0;
}
char* concatenate(char* str1,char* str2,int n,int m)
{
	int i,j;
	char *str3;
	str3=malloc((n+m+1)*sizeof(char));
	if(str3==NULL)
	{
		printf("Memory not allocated\n");
		exit(1);
	}
	for(i=0;i<n && *(str1+i)!='\0';i++)
	{
		str3[i]=str1[i];
	}
	for(j=0;j<m && *(str2+j)!='\0';j++)
	{
		str3[i+j]=str2[j];
	}
	str3[i+j]='\0';
int len=strlen(str3);
str1=realloc(str1,len*sizeof(char));
	for (int i=0;str3[i]!='\0';i++)
	{
		str1[i]=str3[i];
	}
	str1[i]='\0';
	free(str3);
	free(str2);
	return str1;
}
