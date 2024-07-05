#include "main.h"
#include <stdio.h>

/**
 * prime_number - check a prime number
 * @n: Take int 'n' as parameter
 * Return: returns 1 if the input integer 
 * is a prime number, otherwise return 0
 */

int prime_number(int num, int div)
{
	if (div == 1)
	{
		return (1);
	}
	else if (num % div == 0)
	{
		return (0);
	}
	else
	{
		return (prime_number(num, div - 1));
	}
}

/**
 * is_prime_number - check a prime number
 * @n: Take int 'n' as parameter
 * Return: returns 1 if the input integer 
 * is a prime number, otherwise return 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{	
		return (prime_number(n, n - 1));
	}
}
