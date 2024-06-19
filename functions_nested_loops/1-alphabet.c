#include <stdio.h>

/**
* main - Entry point
* Description: This function prints the alphabet, in lowercase,
* followed by a new line.
* Prototype: void print_alphabet(void);
* Return: Always 0 (Success)
*/
void print_alphabet(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz\n";
	int i;

	for (i = 0; alphabet[i] != '\0'; i++)
	{
		_putchar(alphabet[i]);
	}
}
