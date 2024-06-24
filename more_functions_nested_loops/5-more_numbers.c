#include <stdio.h>
#include "main.h"

/**
* more_numbers - Prints 10 times the numbers, from 0 to 14
* followed by a new line
*/

void more_numbers(void)
{

	int row, num;

	for (row = 0; row < 10; row++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
			{
				_putchar((num - 10) + 10 + '0');
			}
			else
			{
				_putchar(num + '0');
			}
		}
		_putchar('\n');

	}
}
