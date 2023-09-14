#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * add_dnodeint_end - adds node to end of linked list
 * @head: pointer to list.
 * @n: value to be added to new node
 * Return: number of node.
 * Description: doubly linked list node structure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (*head != NULL)
	{
		while ((*head)->next != NULL)
			*head = (*head)->next;
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->prev = *head;
	new->next = NULL;
	if (*head != NULL)
		(*head)->next = new;
	*head = new;
	return (new);
}
