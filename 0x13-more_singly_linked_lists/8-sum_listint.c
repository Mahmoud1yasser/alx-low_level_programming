#include "lists.h"
/**
 * sum_listint- function that cacluates sum of data of listint
 * @head: pointer to head of nodes
 * Return: sum of all data.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head != NULL)
	{
		while (head != NULL)
		{
			sum = head->n + sum;
			head = head->next;
		}
		return (sum);
	}
	return (0);
}
