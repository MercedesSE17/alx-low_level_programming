#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - pops off the head of the list and returns its contents
 * @head: head of the list
 * Return: contents of head
 */
int pop_listint(listint_t **head)
{
    int data = 0; // Initialize data to 0

    if (*head != NULL) // Check if the list is not empty
    {
        listint_t *temp = *head; // Create a temporary pointer to the head node
        data = temp->n; // Get the data from the head node

        *head = (*head)->next; // Update the head pointer to point to the next node
        free(temp); // Free the memory of the old head node
    }

    return data; // Return the data from the old head node (0 if the list was empty)
}
