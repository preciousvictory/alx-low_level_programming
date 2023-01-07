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

	if (ht == NULL || key == NULL || value == NULL)
	{
		return (0);
	}

	index = key_index((unsigned char *)key, ht->size);

	if (ht->array[index] != NULL && strcmp(ht->array[index]->key, key) == 0)
	{
		ht->array[index]->value = strdup(value);
		return (1);
	}

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
	item->next =  ht->array[index];
	ht->array[index] = item;

	return (1);
}
