#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - checkes for memory
 * allocation.
 * @b: size of memory.
 * Return: 98 (Success).
 */
void *malloc_checked(unsigned int b)
{
	void *n = (int *)malloc(b);

	if (n == NULL)
	{
	exit(98);
	}
	return (n);
}
