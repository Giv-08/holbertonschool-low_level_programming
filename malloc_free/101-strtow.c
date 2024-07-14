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
    char *word = malloc((length + 1) * sizeof(char));
    if (!word)
    {
        return NULL;
    }

    for (int i = 0; i < length; i++)
    {
        word[i] = start[i];
    }
    word[length] = '\0';

    return word;
}

// The main function to split the string into words
char **strtow(char *str)
{
    if (str == NULL || *str == '\0')
    {
        return NULL;
    }

    int num_words = count_words(str);
    if (num_words == 0)
    {
        return NULL;
    }

    char **words = malloc((num_words + 1) * sizeof(char *));
    if (!words)
    {
        return NULL;
    }

    int index = 0;
    while (*str)
    {
        while (*str && isspace(*str))
        {
            str++;
        }

        char *word_start = str;
        int word_length = 0;

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
                for (int i = 0; i < index; i++)
                {
                    free(words[i]);
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
