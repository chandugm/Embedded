#include<stdio.h>
int main()
{
const int x;//intialize at the time of declaration if not it will throw an error
//x=11;
/*const.c: In function ‘main’:
const.c:5:2: error: assignment of read-only variable ‘x’
 x=11;
  ^
*/
//scanf("%d",&x);//warning will come
int *ptr=&x;
*ptr=15;
printf("%d",x);
return 0;
}
