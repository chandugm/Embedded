/*For one type of mobile service, if cost is 250/- upto 100 calls and 1.25/- for each call made over and above 100 calls. Write a program to read the number of calls made and compute and print the bill.*/

#include<stdio.h>
int main()
{
int calls;
int fbill=250;
float bill;
printf("Enter no .of calls : ");
scanf("%d",&calls);
if (calls<=100){
	printf("%d\n",fbill);}
else{
	bill=(((calls-100)*1.25)+250);
	printf("%.2f\n",bill);
return 0;
}}

