#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * print_list - function that prints lists
 * of data.
 * @h: pointer to head
 * Return: number of printed 
 */
size_t print_list(const list_t *h)
{
	int nodes = 0;
	while(h != NULL)
	{
		if ( h->str == NULL)
			printf("[0] (nil)\n");
		else
		{
		printf("[%d] %s\n", h->len, h->str);
		nodes += 1;
		}
		h = h->next;
	}
	return (nodes);
}
