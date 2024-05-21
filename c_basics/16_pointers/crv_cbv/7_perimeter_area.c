//find the area and perimeter of a circle
#include<stdio.h>
void area_perimeter(float,float*,float*);
int main()
{
float r,a,p;
printf("Enter radius of circle :");
scanf("%f",&r);
area_perimeter(r,&a,&p);
printf("area=%.2f\tperimeter=%.2f\n",a,p);
}
void area_perimeter(float r,float *a,float* p)
{
*a=(22/7.0)*r*r;
*p=2*(22/7.0)*r;
}
