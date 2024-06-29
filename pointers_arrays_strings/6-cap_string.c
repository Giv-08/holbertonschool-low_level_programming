#include "main.h"
#include <stdio.h>

/**
* *string_toupper - capitalizes all words of a string
* @s: Take char '*s' as strings
* Return: s as original address
*/

char *cap_string(char *s)
{
        char *cap = s;
	int index = 0;

        while (*cap != '\0')
        {
                if (*cap >= 'a' && *cap <= 'z')
                {
			if (cap[index] == 0 )
			{
                        	*cap = *cap - 32;
			}
                }
                cap++;
        }
        return (s);
}
