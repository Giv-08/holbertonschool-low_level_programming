#include <stdio.h>
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
	char alphabet = 'a';

	while (i <= 9)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar(alphabet);
		i++;
	}
}
