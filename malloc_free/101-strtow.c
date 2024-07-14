#include <stdlib.h>
#include "main.h"

/**
 * count_word - count the number of words in a string
 * @s: take char 's' as parameter
 * Return: number of words
 */

int count_word(char *s)
{
	int flag = 0, count = 0, words = 0;

	while (s[count] != '\0')
	{
		if (s[count] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			words++;
		}
		s++;
	}

	return (words);
}

/**
 * **strtow - splits a string into words
 * @str: take char 'str' as parameter
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */

char **strtow(char *str)
{
	char **matrix, *temp;
	int i = 0, j = 0, length = 0, words, count = 0;
	int word_start, word_end;

	while (*(str + length))
	{
		length++;
	}

	words = count_word(str);
	if (words == 0)
	{
		return (NULL);
	}

	matrix = (char **)malloc(sizeof(char *) * (words + 1));

	if (matrix == NULL)
	{
		return (NULL);
	}
	while (i <= length)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (count)
			{
				word_end = i;
				temp = (char *) malloc(sizeof(char) * (count + 1));
				if (temp == NULL)
				{
					return (NULL);
				}
				while (word_start < word_end)
				{
					*temp++ = str[word_start++];
				}
				*temp = '\0';
				matrix[j] = temp - count;
				j++;
				count = 0;
			}
		}
		else if (count++ == 0)
		{
			word_start = i;
		}
		i++;
	}

	matrix[j] = NULL;

	return (matrix);
}
