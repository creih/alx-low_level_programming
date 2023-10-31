#include <stdlib.h>
/**
 * str_len - count size of str
 * @str: actual str
 * Return: length of str
 */
int str_len(char *str) {
    int len = 0;

    while (str[len] != '\0')
    {
        len++;
    }
    return len;
}
/**
 * argstostr - from args to str
 * @ac: nbr of args
 * av: vector of str
 * Return: the str converted
 */
char *argstostr(int ac, char **av)
{
	char *result = malloc(total_len + 1);
	int total_len = 0, j = 0, index, len, i = 0, total_len = 0;
	
	if (ac <= 0 || av == NULL)
	{
		return NULL;
	}
	while (i < ac)
	{
		total_len += str_len(av[i]) + 1;
	}
	result = malloc(total_len + 1);
	i = 0;
	if (result == NULL)
	{
		return NULL;
	}
	index = 0;
	while (i < ac)
	{
		len = str_len(av[i]);
		while (j < len)
		{
			result[index] = av[i][j];
			index++;
			j++;
		}
		result[index] = '\n';
		index++;
		i++;
	}
	result[index] = '\0';
	return (result);
}
