#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * print_dlistint - prints all data in list
 * @h: pointer to list.
 * Return: number of node.
 * Description: doubly linked list node structure
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t elements;

	elements = 0;
	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
		while (h != NULL)
		{
			printf("%d\n", h->n);
			elements++;
			h = h->next;
		}
	}
	return (elements);
}
