#include <stdio.h>
#include "main.h"

/**
* more_numbers -  Prints 10 times the numbers, from 0 to 14
* followed by a new line
*/

void more_numbers(void)
{
	int i;

	for (i = 0; i <= 10; i++)
	{
		for (i = 0; i <= 14; i++)
		{
			_putchar(i + 48);
		}
	}
	_putchar('\n');
}
