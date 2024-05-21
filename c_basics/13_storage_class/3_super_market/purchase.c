#include"header.h"
int nitems;
int purchase()
{
        extern int stoc;
        printf("Enter no.of items\n");
        scanf("%d",&nitems);
        if (nitems<=0)
        {
                printf("Selsect valid items\n");
        }
        else if (nitems+stoc > 1000)
	{
		printf("Stock available no need to purchase\n");
	}
        else
        {
                 add_stock(nitems);
        }
}

