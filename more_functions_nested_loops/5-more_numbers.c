#include <stdio.h>
#include "main.h"

/**
* more_numbers -  Prints 10 times the numbers, from 0 to 14
* followed by a new line
*/

void more_numbers(void)
{
	int i;
	int num = 1;

	for (i = 0; i < 10; i++)
	{
		while (num <= 14)
		{
			_putchar(i + 48);
			num++;
		}
	_putchar('\n');
	}
}
