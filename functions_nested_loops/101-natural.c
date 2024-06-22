#include <stdio.h>

/**
* main - Entry point
* Description: This function lists all the natural numbers below
* 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum
* of these multiples is 23. Write a program that computes and prints
* the sum of all the multiples of 3 or 5 below 1024 (excluded)
*/

int main(void)
{
	int sum = 0;
	int i = 0;

	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += 1;
		}
		i++;
	}

	putchar(sum + '0');
	return (0);
}
