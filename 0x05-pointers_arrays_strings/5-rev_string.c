#include "main.h"
#include <string.h>
/**
 * rev_string(char *s)
 * @s: ou parameter
 * Return: void
 */
void rev_string(char *s)
{
	int i, j;
	char *start, *end, chars;

	i = strlen(s);
	start = s;
	end = s;
	for (j = 0; j < i / 2; j++)
	{
		chars = *end;
		*end =*start;
		*start = chars;
		start++;
		end--;
	}
}
