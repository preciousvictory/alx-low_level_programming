#include "hash_tables.h"

/**
 * key_index - a function that gives you the index of a key.
 * @key :  is the key
 * @size:  is the size of the array of the hash table
 *
 * Return: the index at which the key/value pair should be stored in the array
 * of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	/**
	 * This function should use the hash_djb2 function that in the 1-djb2.c file
	 *
	 * the hash function is used to get the index
	 * If we are inserting the key for the first time, the item must be a NULL.
	 * Returns the index at which the key/value pair should be stored in the array
	 * of the hash table
	 */
	unsigned long int index = hash_djb2(key);

	return (index % size);
}
