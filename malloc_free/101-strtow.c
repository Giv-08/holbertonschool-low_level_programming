#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * **strtow - split a string into words
 * @str: Take char 'str' as parameter
 * Return: NULL if function fails
 */

int count_words(char *str)
{
    int count = 0;
    int in_word = 0;

    while (*str)
    {
        if (isspace(*str))
        {
            in_word = 0;
        }
        else if (!in_word)
        {
            in_word = 1;
            count++;
        }
        str++;
    }

    return count;
}

char *copy_word(char *start, int length)
{
	char *word;
	int i = 0;
	word = malloc((length + 1) * sizeof(char));
    if (!word)
    {
        return NULL;
    }

    while (i < length)
    {
        word[i] = start[i];
	i++;
    }
    word[length] = '\0';

    return word;
}

char **strtow(char *str)
{
	char **words;
	char *word_start;
	int num_words, index = 0, word_length = 0, i = 0;

    if (str == NULL || *str == '\0')
    {
        return NULL;
    }

	num_words = count_words(str);
    if (num_words == 0)
    {
        return NULL;
    }

	words = malloc((num_words + 1) * sizeof(char *));
    if (!words)
    {
        return NULL;
    }

    while (*str)
    {
        while (*str && isspace(*str))
        {
            str++;
        }

	word_start = str;

        while (*str && !isspace(*str))
        {
            str++;
            word_length++;
        }

        if (word_length > 0)
        {
            words[index] = copy_word(word_start, word_length);
            if (!words[index])
            {
                while (i < index)
                {
                    free(words[i]);
		    i++;
                }
                free(words);
                return NULL;
            }
            index++;
        }
    }

    words[index] = NULL;
    return words;
}
