#include "lists.h"
/**
 * listint_len -returns num of elements in a link list
 * @h: linked list
 * Return: num of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
		h = h->next;
	return (i);
}
