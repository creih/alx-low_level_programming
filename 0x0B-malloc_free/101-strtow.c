#include <stdlib.h>
#include <stdio.h>
/**
 * is_space help me know where a word ends
 * @c: string to review
 * Return: c
 */
int is_space(char c)
{
	return c == ' ' || c == '\t' || c == '\n';
}
/**
 * count_words - to find out the size of memory needed
 * @str:the whole string
 * Return: the amount of words
 */
int count_words(const char *str)
{
	int count = 0;
	int in_word = 0;

	while (*str)
	{
		if (is_space(*str))
		{
			in_word = 0;
		}
		else if (!in_word)
		{
			count++;
			in_word = 1;
		}
		str++;
	}

	return (count);
}
/**
 * strtow - this is the real deal now
 * @str: string of words to check
 * Return: NULL or the pointer to the words
 */
char **strtow(char *str)
{
	int num_words = count_words(str);
	int i = 0, word_index = 0, word_start = 0, in_word = 0;
	char **words;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}
	words = (char **)malloc((num_words + 1) * sizeof(char *));
	if (words == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		if (is_space(str[i]))
		{
			if (in_word)
			{
				str[i] = '\0';
				words[word_index] = &str[word_start];
				word_index++;
				in_word = 0;
			}
		}
		else if (!in_word)
		{
			word_start = i;
			in_word = 1;
		}
		i++;
	}
	if (in_word)
	{
		words[word_index] = &str[word_start];
	}
	words[num_words] = NULL;
	return (words);
}
