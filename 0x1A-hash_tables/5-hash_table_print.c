#include "hash_tables.h"
/**
 * hash_table_print - a function that prints a hash table.
 * @ht: is the hash table
 * You should print the key/value in the order that they appear in the array of
 * hash table - Order: array, list
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, comma = 0;
	hash_node_t *node;

	if (ht == NULL)
		return;

	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (comma == 0)
			{
				printf(", ");
			}
			printf("%s : %s", ht->array[i]->key, ht->array[i]->value);
			node = node->next;
			comma = 1;
		}
	}
	putchar('}');
}
