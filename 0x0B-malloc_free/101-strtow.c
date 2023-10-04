#include <stdlib.h>
#include <string.h>

/**
 * count_total_words - Count total words in a sentence
 * @s: input string sentence
 *
 * Return: number of words
 */
int count_total_words(char *s)
{
    int i, count = 0;
    int in_word = 0;

    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == ' ' || s[i] == '\n')
        {
            in_word = 0;
        }
        else if (in_word == 0)
        {
            count++;
            in_word = 1;
        }
    }

    return (count);
}

/**
 * copy_to_memory - Copy word from string to memory
 * @str: original string
 * @word_letters: Word Total Letter Count
 * @start: Start word index
 * @end: End word index
 * Return: pointer to the copied word
 */
char *copy_to_memory(char *str, int word_letters, int start, int end)
{
    char *word_memory;
    int i;

    word_memory = (char *)malloc(sizeof(char) * (word_letters + 1));
    if (word_memory == NULL)
        return (NULL);

    i = 0;
    while (start < end)
    {
        word_memory[i] = str[start];
        start++;
        i++;
    }
    word_memory[i] = '\0';

    return (word_memory);
}

/**
 * strtow - Splits a string into words.
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success), or NULL (Error)
 */
char **strtow(char *str)
{
    char **string_matrix;
    int i, k = 0, len = 0, total_words, word_letters = 0, start, end;

    if (str == NULL || str[0] == '\0')
        return (NULL);

    while (str[len])
        len++;

    total_words = count_total_words(str);

    string_matrix = (char **)malloc(sizeof(char *) * (total_words + 1));
    if (string_matrix == NULL)
        return (NULL);

    for (i = 0; i <= len; i++)
    {
        if (str[i] == ' ' || str[i] == '\0')
        {
            if (word_letters)
            {
                end = i;
                string_matrix[k] = copy_to_memory(str, word_letters, start, end);
                if (string_matrix[k] == NULL)
                    return (NULL);
                k++;
                word_letters = 0;
            }
        }
        else if (word_letters++ == 0)
            start = i;
    }

    string_matrix[k] = NULL;

    return (string_matrix);
}
