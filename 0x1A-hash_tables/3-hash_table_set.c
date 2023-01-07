#include "hash_tables.h"
/**
 * hash_table_set - a function that adds an element to the hash table.
 *
 * @ht:  is the hash table you want to add or update the key/value to
 * @key:  is the key. key can not be an empty string
 * @value:  is the value associated with the key. value must be duplicated.
 * value can be an empty string
 *
 * Return: 1 if it succeeded, 0 otherwise
 * In case of collision, add the new node at the beginning of the list
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *item;
       	hash_node_t *current_item;

	if (ht == NULL || key == NULL || value == NULL)
	{
		return (0);
	}

	index = key_index((const unsigned char *)key, ht->size);

	current_item = ht->array[index];
	if (current_item == NULL)
	{
		item = malloc(sizeof(hash_node_t));
		if (item == NULL)
		{
			return (0);
		}

		/**
		 * Creates an item (node of hash table)
		 */
		item->key = strdup(key);
		item->value = strdup(value);
		item->next = NULL;

		ht->array[index] = item;
		return (1);
	}

	while (current_item != NULL)
	{
		/**
		 * if item exits replace it
		 */
		if (strcmp(key, current_item->key) == 0)
		{
			free(current_item->value);
			current_item->value = strdup(value);
			return (1);
		}
		current_item = current_item->next;
	}

	item = malloc(sizeof(hash_node_t));
	if (item == NULL)
	{
		return (0);
	}

	item->next = ht->array[index];
	ht->array[index] = item;

	return (1);
}
