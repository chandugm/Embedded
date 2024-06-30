/*5) Implement itoa function and return the string from the function. Print the result in main. itoa function takes an integer as input, and stores the integer in a string.*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char* i_to_a(int num);
int main()
{
	int num;
	
	printf("Enter a number :");
	scanf("%d",&num);
	char* str=i_to_a(num);
	printf("After conversion :%s\n",str);
	return 0;
}

char* i_to_a(int num)
{
	int rem,i=0,j;
	char* str;
	str=calloc(20,sizeof(char));
	if (str == NULL) {
            printf("Memory allocation failed\n");
            exit(1);
        }
	while(num>0)
	{
		rem=num%10;
		str[i]=rem+'0';
		num/=10;
		i++;
	}
	str[i]='\0';
	int len =strlen(str);
	for(i=0,j=len-1;i<j;i++,j--)
	{
		char temp=str[j];
		str[j]=str[i];
		str[i]=temp;
	}
return str;
}
