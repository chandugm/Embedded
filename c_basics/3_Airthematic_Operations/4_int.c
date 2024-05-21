#include<stdio.h>
int main(){
char c,b,d;
printf("Enter three digits:");
scanf("%c%c%c",&c,&b,&d);
int i=(c-'0')*100+(b-'0')*10+d-'0';
printf("%d",i);
return 0;
}

