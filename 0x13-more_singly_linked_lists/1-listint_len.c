#include <stddef.h>
#include "lists.h"
/**
 * listint_len - returns the num of elements in linked list
 * @h: type of listint_t 
 * Return:num of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;
	
	while (h != NULL)
	{
		num++;
		h = h->next;
	}

	return (num);
}
