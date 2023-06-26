#include "main.h"
#include <stdio.h>
/**
 * print_array - prints arrays
 * Description: 'collect array data and
 * display them'
 * @a: pointer for array data.
 * @n: number of array elements.
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);
		if (j != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
