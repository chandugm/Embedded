/*Take an integer as input and print its magnitude (remove sign and print only number).*/

#include<stdio.h>
int main()
{
int a;
printf("Enter an integer : ");
scanf("%d",&a);
if (a>=0)
	printf("%d\n",a);
else{
	a*=-1;
	//a=-a
	printf("%d\n",a);}
return 0;
}
