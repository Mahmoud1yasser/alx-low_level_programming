#include "function_pointers.h"
/**
 * array_iterator - executes a function
 * given as a parameter on each element
 * of an array.
 * @array: pointer to element array
 * @action: pointer to function in use
 * @size: size of array
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (size != NULL && action != NULL)
	{
		unsigned int i;

		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
