#ifndef LISTS_H
#define LISTS_H
#include <stdlib.h>
#include <stdio.h>
int _putchar(char c);
/**
 * struct list_s - single list structure
 * @str: allocated syrng memory
 * @len: length of made string
 * @next: points to following node
 * Description: node structure for single linked list
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
#endif
