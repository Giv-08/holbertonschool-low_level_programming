#include <stdio.h>

/**
* main - Entry point
* Description: 'This function is to display alphabet in reverse order'
* Return: Always 0 (Success)
*/
int main(void)
{
	char alphabet = 'z';

	while (alphabet >= 'a')
	{
		putchar(alphabet);
		alphabet--;
	}
	putchar('\n');
	return (0);
}
