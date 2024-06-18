#include <stdio.h>

/**
* main - Entry point
* Description: 'This function is to display a message using puts'
* Return: Always 0 (Success)
*/
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
