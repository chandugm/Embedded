/*
3)  read a date in d-m-y format and print it back in given format below:

eg input :2-3-2000
output: 2nd March, 2000

eg input: 4-1-2001
output: 4th January, 2001
*/
#include<stdio.h>
int main()
{
        char *date[]={"st","nd","rd","th"};
        char *month[]={"january","febraury","march","april","may","june","july","august","september","october","november","december"};
        int d,m,y;
        printf("enter date dd-mm-yyyy: ");
        scanf("%d-%d-%d",&d,&m,&y);
        if(d==1||d==21||d==31)
                printf("%d%s ",d,date[0]);
        else if(d==2||d==22)
                printf("%d%s ",d,date[1]);
        else if(d==3||d==23)
                printf("%d%s ",d,date[2]);
        else 
                printf("%d%s ",d,date[3]);
        printf("%s,%d",month[m+1],y);
return 0;
}
