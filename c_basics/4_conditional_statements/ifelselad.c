#include<stdio.h>
int main(){
int bill;
printf("Enter the bill amount:");
scanf("%d",&bill);
if (bill > 10000){
printf("%.2f",bill-(bill*0.1 ));}
else if(bill>5000){
printf("%.2f\n",bill-(bill*0.2));}
else if (bill>1000){
printf("%.2f\n",bill-(bill*0.333));}
else{
printf("%d\n",bill);}
printf("TQ visit again\n");
return 0;
}
