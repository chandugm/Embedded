#include<stdio.h>
void reverse(char str[]);
int main()
{
	char str[100];
	printf("Enter a string:");
	scanf("%99[^\n]",str);
	reverse(str);
	return 0;
}

void reverse(char str[])
{
	int len=0;
	while(str[len]!='\0')
	{
		len++;
	}

	for(int i=0,j=len-1;i<j;i++,j--)
	{
		char temp=str[j];
		str[j]=str[i];
		str[i]=temp;
	}

	int start=0;
	for(int i=0;i<=len;i++){
		if (str[i]==' ' || str [i] == '\0')
		{
			for (int j=start;j<(start+i)/2;j++)
			{
				char temp=str[j];
				str[j]=str[i-1-(j-start)];
				str[i-1-(j-start)]=temp;
			}
			start=i+1;
		}
	}
	printf("%s",str);
}
