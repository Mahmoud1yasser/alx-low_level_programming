#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - memory allocate for
 * array of elements.
 * @nmemb: array of elements.
 * @size: size of array
 *
 * Return: Nothing.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *prt = malloc(nmemb * size);

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	if (prt == NULL)
	{
	return (NULL);
	}
	memset(prt, 0, nmemb * size);
	return (prt);
}
