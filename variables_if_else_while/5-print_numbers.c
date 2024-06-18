#include <stdio.h>

/**
* main - Entry point
* Description: 'This function is to display all base 10 numbers'
* Return: Always 0 (Success)
*/
int main(void)
{
	int number = 0;

	while (number < 10)
	{
		printf("%d", number);
		number++;
	}
	return (0);
}
