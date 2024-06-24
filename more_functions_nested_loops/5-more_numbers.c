#include <stdio.h>
#include "main.h"

/**
* more_numbers - Prints 10 times the numbers, from 0 to 14
* followed by a new line
*/

void more_numbers(void)
{
	long long int num;

	for (num = 0; num < 10; num++)
	{
		_putchar(num + 48);
	}
}
