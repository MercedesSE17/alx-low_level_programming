#include <stddef.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - define function
 * @head: describe argument
 */
void free_listint(listint_t *head)
{
    listint_t *current;

    while (head != NULL)
    {
        current = head; // Store the current node in a temporary variable
        head = head->next; // Move to the next node
        free(current); // Free the memory of the current node
    }
}
