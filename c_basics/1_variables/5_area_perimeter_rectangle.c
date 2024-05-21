#include<stdio.h>
int main(){
int l,w,A,P;
printf("Enter the length & width of a rectangle in meters only");
scanf("%d%d",&l,&w);
A=(l*w);
P=2*(l+w);
printf("Area of rectangle:%d\nPerimeter of rectangle:%d",A,P);
}
