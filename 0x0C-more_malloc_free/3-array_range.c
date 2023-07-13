#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *array_range - make  memory for an array
 * @min: int type
 * @max: int type
 * Return:  return pointer to array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	ptr = (int *)malloc(sizeof(int) * (max - min));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = min; i <= max; i++)
	{
		ptr[i - min] = min;
		min++;
	}
	return (ptr);
}
