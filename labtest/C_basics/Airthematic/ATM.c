#include<stdio.h>
int main(){
int amt;
printf("Enter the amount to withdraw:");
scanf("%d",&amt);
printf("No of 2000/- notes:%d\n",amt/2000);
printf("No of 500/- notes:%d\n",(amt%2000)/500);
printf("No of 200/- notes:%d\n",(amt%2000%500)/200);
printf("No of 100/- notes:%d\n",(amt%2000%500%200)/100);
printf("No of 50/- notes:%d\n",(amt%2000%500%200%100)/50);
return 0;
}
