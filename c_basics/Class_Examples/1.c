#include<stdio.h>
int main(){
char c,b,d;
scanf("%c%c%c",&c,&b,&d);
int i=((c-'0')*100)((b-'0')*10);
printf("%d",i);
}
