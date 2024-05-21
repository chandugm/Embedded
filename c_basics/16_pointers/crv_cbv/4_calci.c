//4) Write a function that can take two integers as input, and gives 5 outputs : addition, subtraction, multiplication, quotient and reminder of those two numbers. Print the outputs in the main function.
#include<stdio.h>
void calci(int,int,int*,int*,int*,int*,int*);
int main()
{
int a,b,add,sub,mul,div,rem;
printf("Enter two numbers :");
scanf("%d%d",&a,&b);
calci(a,b,&add,&sub,&mul,&div,&rem);
printf("%d+%d=%d\n",a,b,add);
printf("%d-%d=%d\n",a,b,sub);
printf("%d*%d=%d\n",a,b,mul);
if (b!=0)
printf("%d/%d=%d\n",a,b,div);
if (b!=0)
printf("%d%%%d=%d\n",a,b,rem);
else
printf("Zero division error\n");
}
void calci(int a,int b,int *add,int *sub,int *mul,int *div,int *rem)
{
*add=a+b;
*sub=a-b;
*mul=a*b;
*div=a/b;
*rem=a%b;

}

