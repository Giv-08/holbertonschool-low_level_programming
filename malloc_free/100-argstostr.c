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
    int i, j, total_length = 0, position = 0;

    if (ac == 0 || av == NULL)
    {
        return NULL;
    }
    for (i = 0; i < ac; i++)
    {
        j = 0;
        while (av[i][j] != '\0') {
            total_length++;
            j++;
        }
        total_length++;
    }
    arg = malloc(total_length * sizeof(char));
    if (arg == NULL)
    {
        return NULL;
    }
    for (i = 0; i < ac; i++)
    {
        j = 0;
        while (av[i][j] != '\0') {
            arg[position] = av[i][j];
            position++;
            j++;
        }
        if (i < ac - 1)
        {
            arg[position] = ' ';
            position++;
        }
    }
    arg[position] = '\0';

    return arg;
}
