#include "main.h"

/**
 * print_diagonal - diagonal
 * @n: line lenght
 * Description :'print line'
 * Return : nothing
 */
void print_diagonal(int n)
{
	int i = 1;
	int j = 1;

	while (i <= n && n > 0)
	{
		j = 1;
		while (j <= i)
		{
			_putchar(32);
			j++;
		}
		i++;
		_putchar(92);
	_putchar(10);
	}
	if (n <= 0)
	{
		_putchar(10);
	}
}
