#include <stdio.h>
/**
 * main here we' ll print alphabets
 * we're be working in this file
 * Return: on success will be (0)
 */
int main(void)
{
	int character;
	/*trying to fix short descrition errors*/
	for (character = 'a'; character <= 'z'; character++)
	{
		putchar(character);
	}
	putchar('\n');
	return (0);
}
