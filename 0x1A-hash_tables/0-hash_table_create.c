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
	if size == NULL or size == 0
		return (NULL);
	hash_table_t *array = (hash_table_t *) malloc(sizeof(hash_table_t));
	if array == NULL
		return (NULL);
	array->size = (unsigned long int *) malloc(sizeof(size) + 1);
	if size == NULL
		return (NULL);
	array->size = size;
	return (array);
}
