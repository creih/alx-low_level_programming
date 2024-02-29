#include "hash_tables.h"
/**
 * hash_table_create - Creates a hash table
 * @size: The size of array
 * Return: ptr to created hash table, NULL if error
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_t = NULL;
	unsigned long int i;

	if (size < 1)
		return (NULL);
	new_t = malloc(sizeof(hash_table_t));
	if (new_t == NULL)
		return (NULL);
	new_t->array = malloc(sizeof(hash_node_t *) * size);
	if (new_t->array == NULL)
	{
		free(new_t);
		return (NULL);
	}
	new_t->size = size;
	for (i = 0; i < size; i++)
		new_t->array[i] = NULL;
	return (new_t);
}
