#include "main.h"

/**
* print_alphabet_x10 - Prints the lowercase alphabet
* Description: This function prints a-z 10 times
* followed by a new line using write
* Return: void
*/

void print_alphabet_x10(void)
{
	int i;
	char letter;

	while (i <= 9)
	{
	for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
		i++;
	}
}
