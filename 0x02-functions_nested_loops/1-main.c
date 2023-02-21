#include "unistd.h"
/**
 * _putschar -to print one char 
 * Return: zero if true
 */
int _putschar(char c)
{
	return (write(1, &c, 1));
}
