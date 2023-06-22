#include "main.h"

/**
 * print_square - printline with lenght
 * @size: square sides
 * Description :'print line'
 * Return : nothing
 */
void print_square(int size)
{
	int i = 0;
	int j = 0;

	while (j < size && size > 0)
	{
		i = 1;
		while (i <= size)
		{
			i++;
			_putchar(35);
		}
		_putchar(10);
		j++;
	}
	if (size <= 0)
	{
		_putchar(10);
	}
}
