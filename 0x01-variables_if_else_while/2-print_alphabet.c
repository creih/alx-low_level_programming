/* creaing a list of alphabets*/
#include <stdio.h>
/**
 * main here we' ll print alphabets
 *
 * Return: on success will be (0)
 */
int main(void)
{
	int character;

	for (character = 'a'; character <= 'z'; character++)
	{
		putchar(character);
	}
	putchar('\n');
	return (0);
}
