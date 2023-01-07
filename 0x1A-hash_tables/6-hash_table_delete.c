#include "hash_tables.h"
/**
 * hash_table_delete -  a function that deletes a hash table.
 * @ht:s the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;

	if (ht == NULL)
	{
		free(ht);
		return;
	}

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			free(node->key);
			free(node->value);
			node = node->next;
		}
		free(node);
		free(ht->array[i]);
	}
	free(ht);
}
