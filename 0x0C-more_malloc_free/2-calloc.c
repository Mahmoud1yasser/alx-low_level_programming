#include "main.h"
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
	void *prt = malloc(nmemb * size);
	char *tmp;
	unsigned int i, j;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	if (prt == NULL)
	{
	return (NULL);
	}
	tmp = prt;
	for (i = 0; i < nmemb; i++)
	{
		for (j = 0; j < size; j++) 
		{
			*tmp++ = 0;
		}
	}
	return (prt);
}
