#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 *  struct node - list of data
 *  @str: string to print
 *  @len: lenghth of string
 *  @next: pointer to next node
 */
typedef struct node
{
	char *str;
	int len;
	struct node *next;
}list_t;
size_t print_list(const list_t *h);
#endif
