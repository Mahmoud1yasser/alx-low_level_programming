#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * print_list - function that prints lists
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
