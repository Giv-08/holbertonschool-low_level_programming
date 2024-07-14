#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *argstostr - concatenates all the arguments of your program
 * @ac: take int 'ac' as parameter
 * @av: take char 'av' as parameter
 * Return: a pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	char *arg;
	int i = 0, j = 0, length = 0, p = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	while (i < ac)
	{
		while (av[i][j] != '\0')
		{
			length++;
			j++;
		}
		length++;
		i++;
	}
	length++;

	arg = malloc(sizeof(char) * length);
        if (arg == NULL)
        {
                return (NULL);
        }
	while (i < ac)
	{
		while (av[i][j] != '\0')
		{
			arg[p] = av[i][j];
			p++;
			j++;
		}
		arg[p] = '\n';
		p++;
	}
	arg[p] = '\0';
	return (arg);
}
