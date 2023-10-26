#include <stdio.h>
/*
 *wildcmp - to compare 2 strings
 * Return: will be 0
 */
int wildcmp_recursive(char *s1, char *s2)
{
    if (*s1 == '\0' && *s2 == '\0')
        return 1;
    if (*s2 == '*')
    {
        return wildcmp_recursive(s1, s2 + 1) || wildcmp_recursive(s1 + 1, s2);
    }
    if (*s1 == *s2 || *s2 == '?')
        return wildcmp_recursive(s1 + 1, s2 + 1);
    return 0;
}

int wildcmp(char *s1, char *s2)
{
    return wildcmp_recursive(s1, s2);
}
