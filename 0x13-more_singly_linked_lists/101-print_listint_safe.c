#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - prints a linked list of integers
 * @head: a pointer to the head node of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow, *fast;
	size_t count = 0;

	if (head == NULL)
		exit(98);
	slow = head;
	fast = head;
	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		printf("%d\n", slow->n);
		count++;
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			printf("-> [%p] %d\n", (void *) slow, slow->n);
			exit(98);
		}
	}
	printf("%d\n", slow->n);
	count++;
	return (count);
}
