#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * node - list of data
 */
typedef struct node
{
	char *str;
	int len;
	struct node *next;
}list_t;
size_t print_list(const list_t *h);
list_t *head = NULL;
#endif
