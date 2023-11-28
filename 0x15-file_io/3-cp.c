#include "main.h"
#define BUFFER_SIZE 1024
/**
 * print_ikos - prints the error sms
 * @code: exit code to be used
 * @message: mess string format
 * @arg: to be printed in err sms
 */
void print_ikos(int code, const char *message, const char *arg)
{
	dprintf(STDERR_FILENO, "%s %s\n", message, arg);
	exit(code);
}
/**
 * copy_file - copies content of a file
 * @file_from: sms' origin to copy
 * @file_to: where to copy a file's content
 * Return: some int
 * OA
 */
void copy_file(const char *file_from, const char *file_to)
{
	int doc_from, doc_to;
	ssize_t izasomwe = 0, izanditswe;
	char buf[BUFFER_SIZE];

	doc_from = open(file_from, O_RDONLY);
	if (doc_from == -1)
		print_ikos(98, "Error: can' t read from file", file_from);
	doc_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (doc_to == -1)
	{
		close(doc_from);
		print_ikos(99, "Error: can' t write to file", file_to);
	}
	while ((izasomwe == read(doc_from, buf, BUFFER_SIZE)) > 0)
	{
		izanditswe = write(doc_to, buf, izasomwe);
		if (izanditswe != izasomwe)
		{
			close(doc_from);
			close(doc_to);
			print_ikos(99, "Error: can' t write from file", file_to);
		}
	}
	if (izasomwe == -1)
	{
		close(doc_from);
		close(doc_to);
		print_ikos(98, "Error: can' t read doc", file_from);
	}
	if (close(doc_from) == -1)
		print_ikos(100, "Error: can' t close doc", (const char *)(intptr_t)doc_from);
	if (close(doc_to) == -1)
		print_ikos(100, "Error: can' t close doc", (const char *)(intptr_t)doc_to);
}
