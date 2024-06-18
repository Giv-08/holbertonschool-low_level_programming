#include <stdio.h>

/**
* main - Entry point
* Description: 'This function is to display
* all lowercase alphabet except e and q'
* Return: Always 0 (Success)
*/
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		if (alphabet != 'e' && alphabet != 'q')
		{
			putchar(alphabet);
		}
		alphabet++;
	}
	putchar('\n');
	return (0);
}
