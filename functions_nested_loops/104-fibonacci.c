#include <stdio.h>

/**
* print_fibonacci - Finds and prints
* the first 98 Fibonacci numbers, starting with 1 and 2
* Return: Always 0 (Success)
**/

void print_fibonacci(void);

void print_fibonacci(void)
{
	unsigned long low = 1, low_two = 2, high = 0, high_two = 0;
	unsigned long high_next, low_next;
	int count;

	printf("%lu, %lu", low, low_two);

	for (count = 3; count <= 98; count++)
	{
		low_next = low + low_two;
		high_next = high + high_two;

	if (low_next >= 1000000000)
	{
		low_next -= 1000000000;
		high_next++;
	}

	if (high_next > 0)
	{
		printf(", %lu%09lu", high_next, low_next);
	}
	else
	{
		printf(", %lu", low_next);
	}

		low = low_two;
		high = high_two;
		low_two = low_next;
		high_two = high_next;
	}
		printf("\n");
}

/**
* main - Entry point
* Return: Always 0 (Success)
**/

int main(void)
{
	print_fibonacci();
	return (0);
}
