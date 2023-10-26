#include <stdio.h>
#include <string.h>
/**
 * is_palindrome_recursive - finds out palindrome
 * @s: actual string
 * @start: beginning index
 * @end: last index
 * Return: 1 for success
 */
int is_palindrome_recursive(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
	return is_palindrome_recursive(s, start + 1, end - 1);
}
/**
 * is_palindrome - to check and call the latter one
 * @s: the actual string to verify
 * Return: 0 if i'm lucky
 */

int is_palindrome(char *s)
{
	int length = strlen(s);
	return is_palindrome_recursive(s, 0, length - 1);
}
