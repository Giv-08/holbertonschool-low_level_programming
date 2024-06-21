#include <stdio.h>

/**
* main - Entry point
* Description: 'This function displays all possible
* combinations of  two two-digit numbers
* Return: Always 0 (Success)
*/

int main(void)
{
	int num_one, num_two;

	for (num_one = 0; num_one < 100; num_one++)
	{
		for (num_two = num_one + 1; num_two < 100; num_two++)
		{
			putchar((num_one / 10) + '0');
			putchar((num_one % 10) + '0');
			putchar(' ');
			putchar((num_two / 10) + '0');
			putchar((num_two % 10) + '0');

			if (num_one != 98 || num_two != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
