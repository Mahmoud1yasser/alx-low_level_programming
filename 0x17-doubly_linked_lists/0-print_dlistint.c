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
	int i;

	for (i = 0; h->prev != NULL && h != NULL; i++)
	{
		h = h->prev;
	}
	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
