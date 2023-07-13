#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - memory allocate for
 * array of elements.
 * @nmemb: array of elements.
 * @size: size of array
 * Return: Nothing.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *prt = (int *)malloc(nmemb * size);
	unsigned int count;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	if (prt == NULL)
	{
	return (NULL);
	}
	count = 0;
	while (count < nmemb * size)
	{
		prt[count] = 0;
		count++;
	}
	return (prt);
}
