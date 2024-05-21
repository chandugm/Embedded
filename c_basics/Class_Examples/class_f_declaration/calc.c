/*
   Write a calculator program with 5 functions below to do the operations of addition, subtraction, multiplication, division for quotient and division for remainder.
   1) int add (int a, int b) // to be called when user chooses +
   2) int sub (int a,int b) // to be called when user chooses -
   3) int mul(int a, int b) // to be called when user chooses *
   4) int quotient(int a, int b) // to be called when user chooses /
   5) int remainder(int a,int b) // to be called when user choose%
 */
#include"h.h"
int main()
{
	int num1,num2,r;
	char c;
scan:printf("Enter num1 operator num2 : ");
     scanf("%d %c%d",&num1,&c,&num2);
     switch(c)
     {
	     case '+':r=add(num1,num2);
		      break;
	     case '-':r=sub(num1,num2);
		      break;
	     case '*':r=mul(num1,num2);
		      break;
	     case '/':
		      if (num2==0)
		      {
			      printf("Zero division Error\n");
			      goto scan;
		      }
		      else
		      {
			      r=div(num1,num2);
			      break;
		      }
	     case '%':if(num2==0)
		      {
			      printf("Zero division error\n");
			      goto scan;
		      }
		      else
		      {
			      r=rem(num1,num2);
			      break;
		      }
	     default:printf("Invalid Operator\n");
		     goto scan;
     }
     printf("%d\n",r);
     return 0;
}

