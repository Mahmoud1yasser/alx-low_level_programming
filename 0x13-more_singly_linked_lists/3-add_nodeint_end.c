#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - function insert node to end
 * @head: pointer to pointer of node head
 * @n: data in node
 * Return: address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while((*head)->next != NULL)
		{
			*head = (*head)->next;
		}
		(*head)->next = new;
	}
	return (new);
}
