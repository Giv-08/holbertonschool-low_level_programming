#include "main.h"
#include <stdio.h>

/**
* *_strstr - locates a substring
* @haystack: Take char 'haystack' as parameter
* @needle: Take char 'needle' as parameter
* Return: a pointer to the beginning of the located 
* substring, or NULL if the substring is not found
*/

char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;

	while (*h != '\0')
	{
		while (*n != '\0')
		{
			if (*h == *n)
			{
				return(n);
			}
			n++;
		}
		h++;
	}
	return (NULL);
}
