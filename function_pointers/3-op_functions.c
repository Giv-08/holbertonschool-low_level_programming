#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - the sum of a and b
 * @b: take int 'a' as parameter
 * @a: take int 'b' as parameter
 * Return: result
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - the difference of a and b
 * @b: take int 'a' as parameter
 * @a: take int 'b' as parameter
 * Return: result
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - the product of a and b
 * @b: take int 'a' as parameter
 * @a: take int 'b' as parameter
 * Return: result
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - the result of the division of a by b
 * @b: take int 'a' as parameter
 * @a: take int 'b' as parameter
 * Return: result
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - the remainder of the division of a by b
 * @b: take int 'a' as parameter
 * @a: take int 'b' as parameter
 * Return: result
 */

int op_mod(int a, int b)
{
	return (a % b);
}
