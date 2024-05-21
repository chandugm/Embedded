#include"dates.h"
int d,d1,d2,m,m1,m2,y,y1,y2;
int main()
{
	int n,i;
	printf("Enter n value\n");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		printf("Enter DOB\n");
scan:scanf("%d-%d-%d",&d,&m,&y);
     int c= (IsValidDate(d,m,y));
     if (c==1 && i==1)
     {
	     d1=d;
	     m1=m;
	     y1=y;
     }

     else if(c==1 && i>=2)
     {
	     d2=d;
	     m2=m;
	     y2=y;

	     int z=DateCompare( d1,m1, y1, d2, m2, y2);

	     if (z==0)
	     {
		     d1=d2;
		     m1=m2;
		     y1=y2;
	     }

     }

     else if (c==0)
     {
	     goto scan;
     }

	}
	PrintDateinFormat(d1,m1,y1);
}


