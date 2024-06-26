#include <stdio.h>
#include "main.h"

/**
* print_array - prints n elements of an array of integers,
* followed by a new line
* @a: Take int '*a' as parameter or array
* @n: Take int 'n' as parameter
*/

void print_array(int *a, int n)
{
	int length = 0;

	while (a[length] != '\0')
	{
		for (n = 0; n < length; n++)
		{
			printf("%d, ", a[length]);
		}
		length++;
	}
}

