#include<stdio.h>
#include<string.h>
void strreplace(char str[],char s1[],char s2[]);
int main()
{
	char str[100],s1[100],s2[100];
	printf("Enter a main string :");
	scanf("%99[^\n]",str);
	scan:getchar();
	printf("Enter a string-1 :");
	scanf("%99[^\n]",s1);
	getchar();
	printf("Enter string-2 :");
	scanf("%99[^\n]",s2);
	if (strlen(s1)==strlen(s2))
{
	strreplace(str,s1,s2);
}
	else
{
printf("Enter s1 and s2 same length\n");
	 goto scan;
}
	return 0;
}
void strreplace(char str[],char s1[],char s2[])
{
	int len=strlen(s1);
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
		if(j==len){
			int j=0;
			while(s2[j]!=0)
			{
			str[i]=s2[j];
			i++;
			j++;
			}
	}
}
	printf("%s",str);
}


