/* Do the ATM Program as an assignment using conditional statements wherever applicable.*/
#include<stdio.h>
int main()
{
	int amount,notes,amt;
	printf("enter the amount to withdraw :");
	scanf("%d",&amount);
	amt=amount;
	if(amt%50!=0){
		 printf("Enter multiple 50 denominations  only");
		 return 0;}
	if(amount>=2000){
			notes=amount/2000;	
			printf("no of 2000 notes are : %d\n",notes);
			amount=amount%2000;
		}	
	if (amount>=500){
			notes=amount/500;
			printf("no of 500 notes are : %d\n",notes);
			amount=amount%500;
		}
	if(amount>=200){
			notes=amount/200;
			printf("no of 200 notes are: %d\n ",notes);
			amount=amount%200;}
	if(amount>=100){
			notes=amount/100;
			printf("no of 100 notes are : %d\n",notes);
			amount=amount%100;}
	if(amount>=50){
			notes= amount/50;
			printf("no of 50 notes are : %d\n",notes);}
	
		return 0;
}
