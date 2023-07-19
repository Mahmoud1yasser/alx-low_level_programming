#include "function_pointers.h"

/**
 * int_index - function searches for integer
 * @array: elements search in.
 * @size: elements count.
 * @cmp: pointer to function
 *
 * Return: -1 case no match
 * index of element (Sucess)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array != NULL && cmp != NULL)
	{
		int i;
		int g;

		for (i = 0; i < size; i++)
		{
			g = cmp(array[i]);
			if (g)
			{
				return (i);
				break;
			}
		}

	}
	return (-1);
}
