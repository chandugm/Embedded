#include<stdio.h>
int main(){
int sp,p,n,cp;
printf("Enter sale price, profit and no.of items");
scanf("%d%d%d",&sp,&p,&n);
cp=(sp-p)/n;
printf("%d",cp);
}
