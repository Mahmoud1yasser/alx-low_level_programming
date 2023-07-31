#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * listint_len - function returns number of nodes
 * @h: pointer to node head
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *p = h;
	int Ncount = 0;

	while(p != NULL)
	{
		p = p->next;
		Ncount = Ncount + 1;
	}
	return (Ncount);
}
