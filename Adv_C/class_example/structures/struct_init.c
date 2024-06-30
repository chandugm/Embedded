#include"header.h"
int main()
{
//struct student s1={1,"chandu",7,10,2000,8,8,2024};

struct student s1[2]={{1,"chandu",7,10,2000,8,8,2024},{1,"chandu",7,10,2000,8,8,2024}};
s1[0].gender='m';
printstudentdata(s1);
}
