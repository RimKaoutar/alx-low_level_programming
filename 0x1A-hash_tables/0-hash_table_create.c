#include "hash_tables.h"

/**
 * *hash_table_create - creates a hash table.
 * @size: Size of the array
 *
 * Return: Pointer to the newly created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	unsigned long int x;

	if (size < 1)
		return (NULL);

	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);

	new_table->size = size;
	new_table->array = malloc(sizeof(hash_table_t) * size);

	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}
	for (x = 0; x < size; ++x)
		new_table->array[x] = NULL;
	return (new_table);
}
