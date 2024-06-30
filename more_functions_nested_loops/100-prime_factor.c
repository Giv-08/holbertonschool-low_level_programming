#include <stdio.h>
#include <math.h>

/**
* main - Finds and prints the largest prime factor of
* the number 612852475143, followed by a new line
* Return: 0 (success)
*/

long long main(long long number)
{
	long long max_prime = -1;
	long long number = 612852475143;
	int i = 0;

	while (n % 2 == 0)
	{
		max_prime = 2;
		number = number / 2;
	}

	while (n % 3 == 0)
	{
		max_prime = 3;
		number = number / 3;
	}

	for (i = 5; i * i <= number; i+= 6)
	{
		while (number % i == 0)
		{
			max_prime = i;
			number = number / i;
		}
		while (number % (i + 2) == 0)
		{
			max_prime = i + 2;
			number = number / (i + 2);
		}
	}

	if (number > 4)
	{
		max_prime = number;
	}

	return (max_prime);
}
