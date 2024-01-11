#include "main.h"
/**
 * read_textfile - func to retrieve some chars
 * @letters: nbr of letters to read
 * @filename: ptr to the file we'll be using
 * Return: 0 if anything goes wrong
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *tunga_doc;
	char *container;
	ssize_t izasomwe, izanditswe;

	if (filename == NULL)
		return (0);
	tunga_doc = fopen(filename, "r");
	if (tunga_doc == NULL)
		return (0);
	container = (char *)malloc(letters);
	if (container == NULL)
	{
		fclose(tunga_doc);
		return (0);
	}
	izasomwe = fread(container, 1, letters, tunga_doc);
	if (izasomwe <= 0)
	{
		fclose(tunga_doc);
		free(container);
		return (0);
	}
	izanditswe = write(STDOUT_FILENO, container, izasomwe);
	if (izanditswe < izasomwe)
	{
		fclose(tunga_doc);
		free(container);
		return (0);
	}
	fclose(tunga_doc);
	free(container);
	return (izanditswe);
}
