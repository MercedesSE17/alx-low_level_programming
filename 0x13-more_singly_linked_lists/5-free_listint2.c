#include <stddef.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - frees a listint_t list
 * @head: double pointer to head of list
 */
void free_listint2(listint_t **head)
{
    listint_t *current;

    if (head == NULL || *head == NULL)
        return; // Check if the head pointer is NULL or if the list is empty, then there is nothing to free.

    while (*head != NULL)
    {
        current = *head;   // Store the current node in a temporary variable
        *head = (*head)->next;  // Move to the next node by updating the double pointer
        free(current);   // Free the memory of the current node
    }
}
