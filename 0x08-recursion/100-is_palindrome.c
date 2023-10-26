#include <stdio.h>
#include <string.h>
/**
 * is_palindrome - finds out palindrome
 * Return: 1 for success
 */
int is_palindrome_recursive(char *s, int start, int end)
{
    if (start >= end)
        return 1; // An empty string or a single character string is a palindrome

    if (s[start] != s[end])
        return 0; // If characters at the start and end don't match, it's not a palindrome

    return is_palindrome_recursive(s, start + 1, end - 1); // Recursively check the substring
}

int is_palindrome(char *s)
{
    int length = strlen(s);
    return is_palindrome_recursive(s, 0, length - 1);
}
