#include<stdio.h>
int main(){
int p,n;
float si,m,r;
printf("Please enter principle amt, time in months and rate of intrest");
scanf("%d%d%f",&p,&n,&r);
m=(n/12);
si=((p*m*r)/100);
printf("%f",si);
return 0;
}
