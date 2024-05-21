#include<stdio.h>
int main(){
int a;unsigned int b;short int s;long int l;unsigned long int ul;float f;double d;long double ld;char c;unsigned char uc;unsigned short int si;
printf("Enter integer value:");
scanf("%d",&a);
printf("%d\n",a);
printf("Enter short int  value:");
scanf("%hd",&s);
printf("%hd\n",s);
printf("Enter unsigned int value:");
scanf("%u",&b);
printf("%u\n",b);
printf("Enter unsigned short int value:");
scanf("%hu",&si);
printf("%hu\n",si);
printf("Enter long int value:");
scanf("%ld",&l);
printf("%ld\n",l);
printf("Enter unsigned long int value:");
scanf("%lu",&ul);
printf("%lu\n",ul);
printf("Enter float  value:");
scanf("%f",&f);
printf("%f\n",f);
printf("Enter double  value:");
scanf("%lf",&d);
printf("%lf\n",d);
printf("Enter long double value:");
scanf("%Lf",&ld);
printf("%Lf\n",ld);
printf("Enter char  value:");
scanf(" %c",&c);
printf("%c\n",c);
printf("Enter unsigned char value:");
scanf(" %c",&uc);
printf("%c\n",uc);
return 0;
}



