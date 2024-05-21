/*Read a number from user, and print its multiplication table upto 10 multiples.*/
#include<stdio.h>
int main()
{
int i=1,num;
printf("Enter a number :");
scanf("%d",&num);
while(i<=10)
{
printf("%d * %d = %d\n",i,num,i*num);
i++;
}
return 0;
}
