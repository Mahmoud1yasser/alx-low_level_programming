#include "lists.h"
/**
 * listint_t *get_nodeint_at_index - function that returns the
 * nth node of a listint_t linked list.
 * @head: pointer to head of nodes
 * @index: index for pointed node
 * Return: node if ture, Null if false
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0;

	if (head != NULL)
	{
		while (head != NULL)
		{
			if (counter == index)
				return (head);
			head = head->next;
			counter++;
		}
		return (head);
	}
	return (NULL);
}
