#include <stdio.h>
#include "lists.h"
/**
 * print_listint - prints all elements of linked list
 * @h: prints list
 * Return:num of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}
	return (num);
}
