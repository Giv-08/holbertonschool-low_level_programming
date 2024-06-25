#include <stdio.h>

/**
* main - Entry point
* Return: Always 0 (success)
*/
int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("%s ", "FizzBuzz");
		}
		else if (i % 5 == 0)
		{
			printf("%s ", "Buzz");
		}
		else if (i % 3 == 0)
		{
			printf("%s ", "Fizz");
		}

		if (i % 3 != 0 && i % 5 != 0)
		{
			printf("%d ", i);
		}
		else if (i == 100)
		{
			printf("%d", i)
		}
	}
	printf("\n");
	return (0);
}
