#include <stdio.h>
#include "main.h"

/**
* times_table - Prints the 9 times table, start with 0
* Return: Always returns 0 (Success)
*/

void times_table(void)
{
	int i, m, n, o, p;

	for (i = 0; i <= 9; i++)
	{
		for (m = 0; m <= 9; m++)
		{
			n = i * m;

			if (n > 9)
			{
				o = n % 10;
				p = (n - o) / 10;
				_putchar(44);
				_putchar(32);
				_putchar(p + '0');
				_putchar(o + '0');
			}
			else
			{
				if (m != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar(n + '0');
			}
		}
		_putchar('\n');
	}
}
