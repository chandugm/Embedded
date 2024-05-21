/*Read n characters from user, and print if each character is vowel or not*/
#include<stdio.h>
int main()
{
	int i=1,n,v=0,nv=0;
	char c;
	printf("Enter no of characters :");
	scanf("%d",&n);
	while(i<=n)
	{
		scanf(" %c",&c);
		if (c =='a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'|| c == 'A' || c =='E'|| c =='I'|| c =='O' || c =='U') 
		{
			printf("Vowel\n");
			v++;
		}
		else
		{
			printf("Not Vowel\n");
			nv++;
		}
		i++;
	}
	printf("vowel:%d NotVowel:%d\n",v,nv);
	return 0;
}

