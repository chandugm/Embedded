/*Read 3 numbers and print which of them is the biggest.*/
#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter three numbers");
	scanf("%d%d%d",&a,&b,&c);
	if (a>=b && a>=c)
		printf("a is bigger");
	else if(b>c)
		printf("b is bigger");
	else
		
		printf("c is bigger");
		
	
return 0;
}
