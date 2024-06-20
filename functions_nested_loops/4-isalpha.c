#include <stdio.h>
#include "main.h"

/**
* _isalpha - Checks if 'c' is a lowercase or uppercase character
* @c: The character to check
* Description: This function takes a single character as an input
* and returns 1 if the character is a upper/lowercase letter
* ('a',('A') to 'z',('Z')),
* otherwise it returns 0
* Return: 1 if c is lowercase, 0 otherwise
*/

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);

	}
}
