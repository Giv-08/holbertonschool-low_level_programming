#include <stdio.h>

/**
* main - Entry point
* Description: 'This function is to display a message
* using prints the alphabet in lowercase,
* and then in uppercase using putchar'
* Return: Always 0 (Success)
*/
int main(void)
{
	char alphabet = 'a';
	char alphabet_up = 'A';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	while (alphabet_up <= 'Z')
        {
                putchar(alphabet_up);
                alphabet_up++;
	}
	putchar('\n');
	return (0);
}
