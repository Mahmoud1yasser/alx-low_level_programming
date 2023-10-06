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

	if (size == 0)
		return (NULL);
	item = (hash_table_t *) malloc(sizeof(hash_table_t));
	if (item == NULL)
		return (NULL);
	item->size = (unsigned long int) malloc(sizeof(size) + 1);
	if (item->size == '\0')
		return (NULL);
	item->size = size;
	return (item);
}
