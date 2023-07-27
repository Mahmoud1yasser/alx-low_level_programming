#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * free_list - free list of nodes
 * of data.
 * @head: pointer to head
 */
void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current->str);
		free(current);
	}
}
