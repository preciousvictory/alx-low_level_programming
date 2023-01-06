#include "hash_tables.h"

/**
 * hash_table_create - a function that creates a hash table.
 *
 * @size: is the size of the array
 *
 * Return:  a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	/**
	 * creates a hash table.
	 *
	 * assign NULL as initial value for each node
	 * Each cell of this array is a pointer to the first node of a linked list
	 */
	hash_table_t *table = malloc(sizeof(hash_table_t));
	unsigned long int i;

	if (table == NULL)
	{
		return (NULL);
	}

	table->size = size;
	table->array = malloc(sizeof(hash_node_t) * size);
	if (table->array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < table->size; i++)
	{
		table->array = NULL;
	}

	return (table);
}
