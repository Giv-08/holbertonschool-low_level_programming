#include <stdio.h>
#include "main.h"

/**
* _strcmp - Compares two strings
* @s1: - Task char '*s1' as parameter
* @s2: - Task char '*s2' as parameter
*/

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0' || s2[i] == '\0')
		{
			break;
		}
		i++;
	}

	if (s1[i] == '\0' && s2[i] == '\0')
	{
		return (0);
	}
	else
	{
		return (s1[i] - s2[i]);
	}

}
