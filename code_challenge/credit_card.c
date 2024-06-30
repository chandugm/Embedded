/*
   A Credit Card number is usually a 16-digit number. A valid Credit 
   Card number would satisfy a rule explained below with the help of a 
   dummy Credit Card number—4567 1234 5678 9129. Start with the 
   rightmost - 1 digit and multiply every other digit by 2.
   4 5 6 7 1 2 3 4 5 6 7 8 9 1 2 9
   8 12 2 6 10 14 18 4
   Then subtract 9 from any number larger than 10. Thus we get:
   8 3 2 6 1 5 9 4
   Add them all up to get 38.
   Add all the other digits to get 42.
   Sum of 38 and 42 is 80. Since 80 is divisible by 10, the Credit Card 
   number is valid.
   Write a program that receives a Credit Card number and checks 
   using the above rule whether the Credit Card number is valid.

 */
#include <stdio.h>

int main() {
	int arr[16], i, sum = 0, temp;
	printf("Enter 16 digit credit card number:\n");
	for(i = 0; i < 16; i++)
	{
		scanf("%1d", &arr[i]); // Read each digit individually
	}

	// Apply Luhn's algorithm
	for(i = 0; i < 16; i++) 
	{
		if(i % 2 == 0)  // Even index from the left is actually an odd index from the right
		{			
			temp = arr[i] * 2;
			if (temp > 9) 
			{
				temp -= 9;
			}
		} 
		else 
		{
			temp = arr[i];
		}
		sum += temp;
	}

	printf("Sum = %d\n", sum);
	if(sum % 10 == 0) 
	{
		printf("Valid credit card number\n");
	}
	else
	{
		printf("Invalid credit card number\n");
	}

	return 0;
}

