#include "main.h"
/**
 * append_text_to_file - adds text to existing file
 * @filename: file to be used
 * @text_content: what to add to the file
 * Return: 1for success -1for fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int bara;
	ssize_t izanditswe;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (-1);
	bara = open(filename, O_WRONLY | O_APPEND);
	if (bara == -1)
		return (-1);
	izanditswe = write(bara, text_content, strlen(text_content));
	if (izanditswe == -1)
	{
		close(bara);
		return (-1);
	}
	close(bara);
	return (1);
}
