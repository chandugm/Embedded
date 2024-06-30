#include<stdio.h>
//#define M 
int main()
{
#if M==1
printf("16\n");
#error im error
#elif M==2
printf("32\n");
#warning im warning
#elif M==3
printf("64\n");
#else 
printf("%s\n",__DATE__);
printf("%s\n",__TIME__);
printf("%d\n",__LINE__);
printf("%s\n",__FILE__);
printf("%d\n",__STDC__);


#endif

}
