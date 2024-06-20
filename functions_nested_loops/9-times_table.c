#include <stdio.h>
#include "main.h"

/**
* times_table - Prints the 9 times table, start with 0
* Return: Always returns 0 (Success)
*/

void times_table(void)
{
	int i, m;

	for (i = 0; i <= 9; i++)
	{
		for (m = 0; m <= 9; m++)
		{
			if (m != 0)
				printf(", ");
			printf("%2d", i * m);
		}
		printf("\n");
	}
}
