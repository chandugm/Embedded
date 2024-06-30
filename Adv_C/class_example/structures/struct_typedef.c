typedef struct
{
        int age;
        char name[40];
        struct date
        {
                int d1,m1,y1;
        }dob;

        int ID; 
        char *ptr;
}student;


void print_student_info(student *);
int main()
{
        student stu[3]={{23,"sai",79},{12,"pra",98},{24,"njuuu",95}};
        stu[0].dob.d1=19;
        stu[0].dob.m1=12;
        stu[0].dob.y1=2001;
        stu[1].dob=stu[0].dob;
        stu[0].ptr="hello";// 1st way

        (stu+0)->ptr="hello";// 2nd way
        printf("%s\n", (stu+0)->ptr);
        print_student_info(stu);

}

void print_student_info(student *arr)
{
        printf(" 2 student date in dob:%d\n",arr[1].dob.d1);
        printf(" 2 student date in dob:%d\n",(*(arr+1)).dob.d1);
        printf(" 2 student date in dob:%d\n",(arr+1)->dob.d1);
}
