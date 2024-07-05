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
	if (num == 0 || num == 1)
	{
		return (0);
	}
	else if (num % div == 0)
	{
		return (0);
	}
	else
	{
		prime_number(num, div + 1);
		return (1);
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
	if (n < 0)
	{
		return (0);
	}
	else
	{	
		prime_number(n, 0);
		return (1);
	}
}
