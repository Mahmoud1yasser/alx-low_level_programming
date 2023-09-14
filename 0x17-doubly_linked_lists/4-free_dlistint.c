#include "lists.h"
/**
 * free_dlistint - free list
 * @head: pointer to linked list
 */
void free_dlistint(dlistint_t *head)
{
	free(head);
}
