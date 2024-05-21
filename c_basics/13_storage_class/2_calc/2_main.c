/*Create the operand variables as global variables and use them in the operation functions directly, without passing as arguments. Function return value should be stored in another global variable in the operations file and be used to print in main.*/
#include"header.h"
int a,b,r;
int main()
{
	
	char c;
scan:printf("Enter num1 operator num2 : ");
     scanf("%d %c%d",&a,&c,&b);
     switch(c)
     {
	     case '+':add();
		      break;
	     case '-':sub();
		      break;
	     case '*':mul();
		      break;
	     case '/':
		      if (b==0)
		      {
			      printf("Zero division Error\n");
			      goto scan;
		      }
		      else
		      {
			      div();
			      break;
		      }
	     case '%':if(b==0)
		      {
			      printf("Zero division error\n");
			      goto scan;
		      }
		      else
		      {
			      rem();
			      break;
		      }
	     default:printf("Invalid Operator\n");
		     goto scan;
     }
     printf("%d\n",r);
     return 0;
}

