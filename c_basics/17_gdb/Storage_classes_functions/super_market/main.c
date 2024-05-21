#include"header.h"
extern int stoc;
int main()
{
char choice;
while(1)
{
printf("1:check stock \n2:sell \n3:purchase \n4:Quit\n");
printf("Select your option\n");
scanf(" %c",&choice);
while (getchar() != '\n');
switch(choice)
{
case '1':printf("Available stock:%d\n",stoc);break;
case '2':sell();break;
case '3':purchase();break;
case '4':return 0;
default:printf("Select valid option\n");
}
}
}
