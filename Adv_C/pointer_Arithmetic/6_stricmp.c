#include<stdio.h>
int mystricmp(char s1[],char s2[]);
int main()
{
	char s1[100],s2[100];
	printf("Enter a string-1 :");
	scanf("%99[^\n]",s1);
	getchar();
	printf("Enter string-2 :");
	scanf("%99[^\n]",s2);
	int i=mystricmp(s1,s2);
	if (i<0) printf("string-2 is bigger\n");
	else if(i>0) printf("string-1 is bigger\n");
	else printf("both strings are equal\n");
	return 0;
}
int mystricmp(char s1[],char s2[])
{
	char *s1ptr=s1,*s2ptr=s2;
	for (int i=0;*(s1ptr+i)!=0 || *(s2ptr+i)!=0;i++)
	{
		char str1[100],str2[100];
		char *str1ptr=str1,*str2ptr=str2;		
		//converting all letters to small
		if(*(s1ptr+i)>=65 && *(s1ptr+i) <=90)
			*(str1ptr+i)=*(s1ptr+32);

		else *(str1ptr+i)=*(s1ptr+i);

		if(*(s2ptr+i)>=65 && *(s2ptr+i) <=90)
			*(str2ptr+i)=*(s2ptr+i)+32;
		else *(str2ptr+i)=*(s2ptr+i);
		if (*(str1ptr+i)-*(str2ptr+i)==0)
			continue;
		else
			return *(str1ptr+i)-*(str2ptr+i);
	
}
}

