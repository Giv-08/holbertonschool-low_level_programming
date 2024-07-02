#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - print the chessboard
 * @a: Take char 'a' as parameter with number of array
 */

void print_chessboard(char (*a)[8])
{
	int x = 0;
	int y;

	while (x < 8)
	{
		y = 0;

		while (y < 8)
		{
			_putchar(a[x][y]);
			if (y == 7)
			{
				_putchar('\n');
			}
			y++;
		}
		x++;
	}
}
