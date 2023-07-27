#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * list_len - function returns the number
 * of elements in a linked
 * of data.
 * @h: pointer to head
 * Return: number of printed
 */
size_t list_len(const list_t *h)
{
	int nodes = 0;

	while (h != NULL)
	{
		nodes += 1;
		h = h->next;
	}
	return (nodes);
}
