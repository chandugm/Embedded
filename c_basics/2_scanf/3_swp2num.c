/*swap the values of 2 variables.*/
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter a and b values:");
    scanf("%d%d",&a,&b);
    printf("Before swap\na=%d\nb=%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swap\na=%d\nb=%d\n",a,b);
    return 0;
}
