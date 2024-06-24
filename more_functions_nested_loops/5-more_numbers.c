#include <stdio.h>
#include "main.h"

/**
* more_numbers -  Prints 10 times the numbers, from 0 to 14
* followed by a new line
*/

void more_numbers(void)
{
	int row;
	int num;

	for (row = 0; row < 10; row++)
	{
		for  (num = 0; num <= 14; num++)
		{
			_putchar(num + '0');
		}
	_putchar('\n');
	}
}
