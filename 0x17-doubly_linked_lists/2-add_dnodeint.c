#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * add_dnodeint - adds node to end of linked list
 * @head: pointer to list.
 * Return: number of node.
 * Description: doubly linked list node structure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	size_t elements;

	elements = 0;
	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
		{
			return (NULL);
		}
		new->n = n;
		head->prev = new;
		new->next = head;
		new->prev = NULL;
	}
	return (&new);
}
