#include "lists.h"
/**
 * print_list - a function that prints all the elements of a list_t list.
 * @h: singly linked list
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		for (j = 0; j < h->len; j++)
		{
			_putchar(h->str[j]);
		}
		i++;
		h = h->next;
	}
	return (i);
}
