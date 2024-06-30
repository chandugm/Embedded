#include<stdio.h>
struct student
{
int ID;
char name[20];
}*ptr;
int main()
{
struct student stu={12,"chandu"};
ptr=&stu;//structure pointer
printf("%s\n",(*ptr).name);
printf("%s\n",ptr->name);
printf("%d",ptr->ID);
}
