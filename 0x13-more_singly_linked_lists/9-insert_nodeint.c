#include "lists.h"
/**
 * insert_nodeint_at_index- function that inserts a
 * new node at a given position
 * @head: pointer to head of nodes
 * @idx: index for the position of new node.
 * @n: data of new node
 * Return: sum of all data.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *find = *head;
	unsigned int pos = 1;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n =  n;
	if (head != NULL && *head != NULL)
	{
		if (idx == 0)
		{
			new->next = *head;
			*head = new;
			return (new);
		}
		while (*head != NULL)
		{
			if (pos == idx)
			{
				new->next = find->next;
				find->next = new;
				return (new);
			}
			find = find->next;
			pos++;
		}
		if (idx == pos && find == NULL)
		{
			find->next = new;
			return (new);
		}
	}
	return (NULL);
}
