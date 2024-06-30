#include<stdio.h>
struct student {char name[20];int age};
int main()
{
static struct student stu1={"A",10},stu2={"A",12};
if (stu1==stu2)
printf("Both are same\n");
}
