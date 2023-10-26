#include <stdio.h>
#include <string.h>
/*
 * is_palindrome - finds out palindrome
 * Return: 1 for success
 */
int is_palindrome(char *s)
{
    int start, end;
    if (start >= end)
        return 1;
    if (s[start] != s[end])
        return 0;
    return is_palindrome_recursive(s, start + 1, end - 1);
}
