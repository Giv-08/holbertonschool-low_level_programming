#include "main.h"
#include <stdio.h>

/**
* *cap_string - capitalizes all words of a string
* @s: Take char '*s' as strings
* Return: s as original address
*/

int is_separator(char c) {
    return (c == ' ' || c == '\t' || c == '\n' || c == ',' || c == ';' ||
            c == '.' || c == '!' || c == '?' || c == '"' || c == '(' ||
            c == ')' || c == '{' || c == '}');
}

char *cap_string(char *s)
{
        char *cap = s;

        while (*cap != '\0' && !is_separator(*s))
        {
                if (*cap >= 'a' && *cap <= 'z')
                {
                       	*cap = *cap - 32;
                }
                cap++;
		break;
        }
        return (s);
}
