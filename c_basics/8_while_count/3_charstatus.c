/*Read n characters from user and print if each character is a capital alphabet, small alphabet, numeric character  or special character.*/
#include<stdio.h>
int main()
{
	int i=1,n,ca=0,sa=0,nc=0,sp=0;
	char c;
	printf("Enter no of characters :");
	scanf("%d",&n);
	while(i<=n)
	{
		scanf(" %c",&c);
		(c>=97 && c<=122)?(printf("Small alphabet\n"),sa++):(c>=65 && c<=90)?(printf("Capital Alphabet\n"),ca++):(c>=48 && c<=57)?(printf("Numeric character\n"),nc++):(printf("Special character\n"),sp++);
i++;
	}
	printf("capital alphabet :%d  small alphabet :%d  numeric character :%d  special character :%d\n",ca,sa,nc,sp );
	return 0;
} 

