/*4) read an integer and print it back in complete number name expansion with place values as below:

  eg., 458
output : four hundred fifty eight

eg., 2458
output: two thousand four hundred fifty eight
 */
#include <stdio.h>

void print_number(int num) {
	char *units[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
	char *teens[] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen","Nineteen"}; 
	char *ts[] = {" ","Ten", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
	char *tens[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

	if (num >= 10000) 
	{
		printf("%s Thousand ", ts[num / 10000]);
		num %= 10000;
	}
	if (num >= 1000) 
	{
		printf("%s Thousand ", units[num / 1000]);
		num %= 1000;
	}
	if (num >= 100) 
	{
		printf("%s Hundred ", units[num / 100]);
		num %= 100;
	}
	if (num >= 20) 
	{
		printf("%s ", tens[num / 10]);
		num %= 10;
	} else if (num >= 10) 
	{
		printf("%s ", teens[num - 10]);
		num = 0;
	}
	if (num > 0) 
	{
		printf("%s ", units[num]);
	}
}

int main() 
{
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	print_number(num);
	printf("\n");
	return 0;
}


