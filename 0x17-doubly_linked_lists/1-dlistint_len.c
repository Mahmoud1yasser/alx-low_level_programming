#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * dlistint_len - returns the number of elements in a linked
 * @h: pointer to list.
 * Return: number of node.
 * Description: doubly linked list node structure
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t elements;

	elements = 0;
	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
		while (h != NULL)
		{
			elements++;
			h = h->next;
		}
	}
	return (elements);
}
