#include <stdio.h>

/**
* largest_prime_factor - Finds and prints the largest prime factor of
* the number 612852475143, followed by a new line
* Return: max_prime
*/

unsigned long largest_prime_factor(unsigned long n) 
{
	unsigned long max_prime = 1;
	unsigned long i;
   
	while (n % 2 == 0) 
	{
		max_prime = 2;
		n /= 2;
	}

	for (i = 3; i * i <= n; i += 2) 
	{	
		while (n % i == 0) 
		{
			max_prime = i;
			n /= i;
		}
	}

	if (n > 2) 
	{
		max_prime = n;
	}

	 return max_prime;
}

/**
* main - Calls function largest_prime_factor
* Return: 0 (success)
*/

int main(void) 
{
	unsigned long number = 612852475143;
	unsigned long max_prime = largest_prime_factor(number);

	printf("%lu\n", max_prime);
	return 0;
}
