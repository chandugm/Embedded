#include<stdio.h>
int main(){
int r;
float A,P;
float pi =3.14159265358979323846;
printf("Enter the radius value of circle");
scanf("%d",&r);
A=pi*r*r;
P=2*pi*r;
printf("Area of circle:%f \nPerimeter of circle:%f",A,P);
return 0;
}
