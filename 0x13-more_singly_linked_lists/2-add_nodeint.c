#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * listint_len - function returns number of nodes
 * @head: pointer to pointer of node head
 * @n: data in node
 * Return: address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	if (new == NULL)
		return(NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
