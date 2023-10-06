#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_print - function to print a hash table in C
 * @ht: hash table to be printed
 * Return: printed elements of hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0;
	unsigned long int check = 0;
	hash_table_t *temp;

	if (ht != NULL)
	{
		printf("{");
		temp = ht->array[index];
		while (index < ht->size)
		{
			while (temp != NULL)
			{
				if (check == 1)
				printf(", ");
				printf("'%s': '%s'", temp->key, temp->value);
				check = 1;
				temp = temp->next;
			}
			index++;
			printf("}\n");
		}
		printf("}\n");
	}
}
