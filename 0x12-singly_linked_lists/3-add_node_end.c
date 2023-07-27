#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node_end - function adds node to end of nodes
 * of data.
 * @head: pointer to pointer head
 * @str: string to be added
 * Return: pointer to added node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *lk = malloc(sizeof(list_t));

	if (lk == NULL)
		return (NULL);
	lk->str = strdup(str);
	lk->len = strlen(str);
	lk->next = *head;
	*head = lk;
	return (lk);
}
