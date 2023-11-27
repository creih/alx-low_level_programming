#include "main.h"
/**
 * create_file - creates a file on diff basis
 * @filename: name of file to create
 * @text_content: what should be in the file
 * Return: -1 if failed
 */
int create_file(const char *filename, char *text_content)
{
	int bara;
	ssize_t izanditswe;

	if (filename == NULL)
		return (-1);
	bara = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (bara == -1)
		return (-1);
	if (text_content != NULL)
	{
		izanditswe = write(bara, text_content, strlen(text_content));
		if (izanditswe == -1)
		{
			close(bara);
			return (-1);
		}
	}
	close(bara);
	return (1);
}
