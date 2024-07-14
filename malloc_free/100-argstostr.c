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
	int i, j, length = 0, p = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			length++;
			j++;
		}
		length++;
	}

	arg = malloc(length * sizeof(char));
	if (arg == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		j = 0;
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
