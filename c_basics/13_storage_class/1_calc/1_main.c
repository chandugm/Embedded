/*Create the operand variables as global variables and use them in the operation functions directly, without passing as arguments. Function returns the result as return value.
*/
#include"header.h" 
int a,b;
int main()
{
	//int num1,num2,r;
	char c;int r;
scan:printf("Enter num1 operator num2 : ");
     scanf("%d %c%d",&a,&c,&b);
     switch(c)
     {
	     case '+':r=add();
		      break;
	     case '-':r=sub();
		      break;
	     case '*':r=mul();
		      break;
	     case '/':
		      if (b==0)
		      {
			      printf("Zero division Error\n");
			      goto scan;
		      }
		      else
		      {
			      r=div();
			      break;
		      }
	     case '%':if(b==0)
		      {
			      printf("Zero division error\n");
			      goto scan;
		      }
		      else
		      {
			      r=rem();
			      break;
		      }
	     default:printf("Invalid Operator\n");
		     goto scan;
     }
     printf("%d\n",r);
     return 0;
}


