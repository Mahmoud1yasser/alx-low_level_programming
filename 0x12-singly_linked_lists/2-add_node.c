#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node - function returns the number
 * of elements in a linked
 * of data.
 * @head: pointer to pointer head
 * @str: string to be added
 * Return: pointer to added node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *linkedlist = *head;
	list_t *lk = (list_t*) malloc(sizeof(list_t));
	if (lk == NULL)
		return (NULL);
	lk->str = strdup(str);
	while(linkedlist->next != NULL)
		linkedlist = linkedlist->next;
	linkedlist->next = lk;
	return (linkedlist->next);
}
