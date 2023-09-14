#include "lists.h"
/**
  * free_dlistint - Free a doubly linked list
  * @head: Pointer to the first node in the list
  */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
