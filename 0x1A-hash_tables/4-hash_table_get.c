#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_get - function to retrieve value at key
 * @ht: is the hash table
 * @key: is the key being searched
 * Return: associated value if found or NULL if not
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp;
	unsigned long int index;

	if (!ht || !ht->array || !key || strlen(key) == 0)
	{
		return (NULL);
	}
	index = key_index((const unsigned char *) key, ht->size);
	temp = ht->array[index];
	if (ht->array[index] == NULL)
		return (NULL);
	while (index < ht->size)
	{
		while (temp != NULL)
		{
			if (strcmp(temp->key, key) == 0)
				return (temp->value);
			temp = temp->next;
		}
		index++;
	}
	return (NULL);
}
