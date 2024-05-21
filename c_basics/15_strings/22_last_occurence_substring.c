#include<stdio.h>
#include<string.h>
int mystrstr(char str[],char sub[]);
int main()
{
	char str[100],sub[100];
	printf("Enter a string :");
	scanf("%99[^\n]",str);
	getchar();
	printf("Enter a sub-string :");
	scanf("%99[^\n]",sub);
	int i=mystrstr(str,sub);
	if(i>=0)printf("index :%d",i);
	else printf("Not found \n");
	return 0;
}
int mystrstr(char str[],char sub[])
{
int r=-1;
	int len=strlen(sub);
	for(int i=0;str[i]!='\0';i++)
	{	int j;
		int k=i;
		for ( j=0;sub[j]!='\0';j++)
		{
			if (str[k]==sub[j])
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
			r=i;
		}
	}
return r;
}

