#include "main.h"
#include <stdio.h>

/**
* print_diagsums -  prints the sum of the two diagonals
* of a square matrix of integers
* @a: Take int 'a' as parameter
* @size: Take int 'size' as parameter
*/

void print_diagsums(int *a, int size)
{
	int x = 0;
	int sum = 0;
	int sum_two = 0;

	while (x < size)
	{
		sum += a[x * size + x];
		sum_two += a[x * size + (size - 1 - x)];
		x++;
	}
	printf("%d, %d\n", sum, sum_two);
}
