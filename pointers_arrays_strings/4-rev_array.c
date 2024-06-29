#include "main.h"
#include <stdio.h>

/**
* reverse_array - reverses the content of an array of integers
* @a: an array of integers
* @n: the number of elements to swap
* Return: nothing.
*/

void reverse_array(int *a, int n)
{
	int half = n / 2;
	int i;

	while (i < half)
	{
		a[i] = a[n - 1 - i];
		i++;
	}

	printf("%d\n", a[n - 1 - i]);
	return;
}
