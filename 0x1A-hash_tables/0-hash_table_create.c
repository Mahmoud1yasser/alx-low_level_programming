#include "hash_tables.h"
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
/**
 * hash_table_create - creates hash table array
 * @size: size of hash table
 * Return: created array
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *item;
	unsigned long int count;

	if (size == 0)
		return (NULL);
	item = malloc(sizeof(hash_table_t));
	if (item == NULL)
		return (NULL);
	item->size = size;
	item->array = malloc(sizeof(hash_node_t *) * size);
	if (item->array == NULL)
	{
		free(item);
		return (NULL);
	}
	for (count = 0; count < size; count++)
	{
		item->array[count] = NULL;
	}
	return (item);
}
