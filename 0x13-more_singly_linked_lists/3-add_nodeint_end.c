#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *add_nodeint_end - adds a new node at the end of a listint_t list
 *@head: current place
 *@n: int to add to
 *Return: pointer current position
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *new_node, *temp;

    new_node = malloc(sizeof(listint_t)); // Allocate memory for the new node
    if (new_node == NULL)
    {
        return (NULL); // Return NULL if malloc fails
    }

    new_node->n = n; // Set the value of the new node
    new_node->next = NULL; // Set the next pointer of the new node to NULL

    if (*head == NULL) // If the list is empty, make the new node the head
    {
        *head = new_node;
    }
    else
    {
        temp = *head;
        while (temp->next != NULL) // Traverse the list to find the last node
        {
            temp = temp->next;
        }
        temp->next = new_node; // Set the next pointer of the last node to the new node
    }

    return (new_node); // Return the address of the new element
}
