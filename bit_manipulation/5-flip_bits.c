#include <stdio.h>
#include "main.h"

/**
 * clear_bit - returns the number of bits you would need to flip
 * to get from one number to another
 * @n: take 'n' as parameter
 * @m: take 'm' as parameter
 * Return: int count
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result;
	unsigned int count = 0;

	result = n ^ m;

	while (result)
	{
		count += result & 1;
		result = result >> 1;
	}
	return (count);
}
