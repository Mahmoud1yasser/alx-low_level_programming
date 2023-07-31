#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - function to free data in nodes
 * @head: first node
 */
void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *p = *head;

	if (p == NULL)
		return;
	while (p != NULL)
	{
		current = p;
		p = p->next;
		free(current);
	}
	*head = NULL;
}
