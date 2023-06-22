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

	while (i <= n)
	{
		i++;
		_putchar(32);
	}
	if (n > 0)
	{
	_putchar(92);
	}
	_putchar(10);
}
