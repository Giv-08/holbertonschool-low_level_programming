#include "main.h"
#include <stdio.h>

/**
* *_strpbrk - searches a string for any of a set of bytes
* @s: Take char '*s' as parameter
* @accept: Take char '*accept' as parameter
* Return: a pointer to the byte in s that matches one of
* the bytes in accept, or NULL if no such byte is found
*/

char *_strpbrk(char *s, char *accept)
{
	unsigned int a = 0;
        unsigned int b = 0;
        unsigned int counter = 0;
        int loop = 1;
        int found = 0;

        while (s[a] != '\0' && loop == 1)
        {
                found = 0;
                b = 0;
                while (accept[b] != '\0')
                {
                       if (s[a] == accept[b])
                       {
                               counter++;
                               found = 1;
                       }
                       b++;
                }

                if (!found)
                {
                        break;
                }

                a++;
        }
        return (s);

}
