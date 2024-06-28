#include <stdio.h>
#include "main.h"

/**
* *_strncmp - Compares two strings
* @s1: - Task char '*dest' as parameter
* @s2: - Task char '*src' as parameter
*/

int _strcmp(char *s1, char *s2)
{
	int i = 0;

        while (s1[i] != '\0' && s2[i] != '\0')
	{
			s1++;
			s2++;
	}

	if (s1[i] > s2[i])
	{
		printf("%d\n", s1[i]);
	}
	else if (s1[i] < s2[i])
	{
		printf("%d\n", s2[i]);
	}
	else if (s1[i] == s2[i])
	{
		printf("0");
	}
	return (0);
}
