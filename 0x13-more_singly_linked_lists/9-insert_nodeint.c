#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a new node at a given
 * position.
 * @head: singly linked list
 * @n: new node value
 * @idx: is the index of the list where the new node should be added. Index
 * starts at 0\
 * if it is not possible to add the new node at index idx, do not add the new
 * node and return NULL
 *
 * Returns: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *current = *head;
	listint_t *prev = malloc(sizeof(listint_t));
	listint_t *new_node = malloc(sizeof(listint_t));

	if (prev == NULL)
		return (NULL);
	if (new_node == NULL)
		return (NULL);

	prev = NULL;
	while (current->next != NULL)
	{
		if (i == idx)
		{
			new_node->n = n;
			new_node->next = current->next;
			prev->next = new_node;

			return (new_node);
		}

		i++;
		prev = current;
		current = current->next;
	}
	return (NULL);
}
