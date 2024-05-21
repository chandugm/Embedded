#include<stdio.h>
int main(){
int bill;
printf("Enter the bill amount:");
scanf("%d",&bill);
if (bill > 10000){
printf("%.2f",bill-(bill*0.1 ));}
else{
printf("%d\n",bill);}
printf("TQ visit again\n");
return 0;
}
