#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * pop_listint -  function that deletes the head
 * node of a listint_t linked list
 * @head: pointer to the pointer for the head.
 * return: 0 if empty , head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int temp_n;

	if (head != NULL && *head != NULL)
	{
		temp_n = temp->n;
		*head = temp->next;
		return (temp_n);
	}
	return (0);
}
