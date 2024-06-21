#include <stdio.h>

/**
* main - Entry point
* Description: 'This function displays all possible
* combinations of three-digit numbers
* Return: Always 0 (Success)
*/

int main(void)
{
	int m, n, o;

	for (m = 0; m < 10; m++)
	{
		for (n = m + 1; n < 10; n++)
		{
			for (o = n + 1; 0 < 10; o++)
			{
				putchar(m + '0');
				putchar(n + '0');
				putchar(o + '0');
			}
		if (m != 7 || n != 8 || o != 9)
		{
			putchar(',');
			putchar(' ');
		}
		}
	}
	putchar('\n');
	return (0);
}
