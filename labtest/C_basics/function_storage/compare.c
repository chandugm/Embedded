#include"dates.h"
int DateCompare(int d1,int m1,int y1,int d2,int m2,int y2)
{
	if (y1<y2 || (y1==y2 && (m1<m2 ||(m1==m2 && (d1>d2)))))
	{
		return 1;
	}
	else
	{
		return 0;
	}


}
