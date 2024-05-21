//14. WAP Swap any two numbers using bitwise operators. How does it work?

#include<stdio.h>

int main()
{
int a,b;
printf("Enter  a and b values :");
scanf("%d%d",&a,&b);
printf("Before Swap a=%d b=%d\n",a,b);
a=a^b;
b=a^b;
a=a^b;
printf("After Swap a=%d b=%d\n",a,b);
return 0;
}
/*
We XOR a with b and store the result in a. This effectively stores the combination of both a and b in a.
Then, we XOR a (which now holds the combination of a and b) with b and store the result in b. This effectively restores the original value of a in b.
Finally, we XOR a (which now holds the original value of b) with b (which now holds the original value of a) to restore the original value of b in a.
*/
