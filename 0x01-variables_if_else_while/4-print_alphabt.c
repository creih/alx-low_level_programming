#include <stdio.h>
/**
 * main - printing alphabets without q and e
 * Return: if is (0) will be a success
 */
int main(void)
{
	int alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet == 'q' || alphabet == 'e')
		{
			continue;
		}
		else
		{
			putchar(alphabet);
		}
	}
	putchar('\n');
	return (0);
}
