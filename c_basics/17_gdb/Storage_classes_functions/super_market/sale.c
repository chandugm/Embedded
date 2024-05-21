#include"header.h"
int n_items;
int sell()
{
	extern int stoc;
	printf("Enter no.of items\n");
	scanf("%d",&n_items);
	if (n_items<=0)
	{
		printf("ENTER VALID STOCK\n");
	}
	else if (n_items > stoc)
	{

		printf("OUT OF STOCK \n");
	}
	else
	{
		delete_stock(n_items);
	}
}
