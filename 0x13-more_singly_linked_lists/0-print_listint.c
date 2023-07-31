#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * print_listint - prints elements in linked lists
 * @h: pointer for lists to be printed
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *p = h;
	int count = 0;

	while (p != NULL)
	{
		printf("%d\n", p->n);
		p = p->next;
		count = count + 1;
	}
	return (count);
}
