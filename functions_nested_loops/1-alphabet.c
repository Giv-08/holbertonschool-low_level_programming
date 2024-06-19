#include <stdio.h>
#include "main.h"

/**
* main - Entry point
* Description: This function prints the alphabet, in lowercase,
* followed by a new line.
* Prototype: void print_alphabet(void);
* Return: Always 0 (Success)
*/
void print_alphabet(void);

void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
}

int main(void)
{
	return (0);
}
