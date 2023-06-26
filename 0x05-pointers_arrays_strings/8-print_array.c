#include "main.h"
/**
 * print_array - prints arrays
 * Description: 'collect array data and 
 * display them'
 * @a: pointer for array data.
 * @n: number of array elements.
 */
int print_array(int *a, int n)
{
	int i = 0;
	int j;
	
	while (*(a + i) != 0)
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		_putchar(*(a +j));
		if (j != i - 1)
		{
			_putchar(44);
			_putchar(32);
		}
	}	


}
