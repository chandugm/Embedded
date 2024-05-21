/* Read 4 numbers and print which of them is biggest.*/
#include<stdio.h>
int main(){
int a,b,c,d;
printf("Enter four numbers :");
scanf("%d%d%d%d",&a,&b,&c,&d);
if(a>b && a>c && a>d)
	printf("a is bigger");
else if(b>c && b>d)
	printf("b is bigger");
else if (c>d)
	printf("c is bigger");
else 
	printf("d is bigger");
return 0;
}
