#include<stdio.h>
int main(){
int a;
printf("Enter a 4-digit number:");
scanf("%d",&a);
printf("OUTPUT1:\n");
printf("%d\n%d\n%d\n%d\n\n\n\n",a%10,(a/10)%10,(a/100)%10,a/1000);
printf("OUTPUT2:\n");
printf("%d\n%d\n%d\n%d\n\n\n\n",a/1000,(a/100)%10,(a/10)%10,a%10);
printf("OUTPUT3:\n");
printf("%d\n%d\n%d\n%d\n\n\n\n",a/1000,a/100,a/10,a);
printf("OUTPUT4:\n");
printf("%d\n%d\n%d\n%d\n\n\n\n",a,a/10,a/100,a/1000);
printf("OUTPUT5:\n");
printf("%d%d%d%d\n\n\n\n",a%10,(a/10)%10,(a/100)%10,a/1000);
printf("OUTPUT6:\n");
printf("%4d\n%3d\n%2d\n%d\n\n\n\n",a%10,(a/10)%10,(a/100)%10,a/1000);
return 0;
}
