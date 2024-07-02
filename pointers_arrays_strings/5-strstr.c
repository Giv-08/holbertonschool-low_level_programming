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

	if (*needle == '\0')
	{
		return ((char *)haystack);
	}

	while (*haystack != '\0')
	{
		char *h = haystack;
        	char *n = needle;
		while (*n != '\0' && *n == *h)
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return ((char *)haystack);
		}
		haystack++;
	}

	return (NULL);
}
