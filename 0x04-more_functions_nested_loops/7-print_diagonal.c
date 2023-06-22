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

	for (i <= n && n > 0; i++)
	{
		for (j <=n; j++)
		{
			_putchar(32);
		}
		_putchar(92);
	}
	_putchar(10);
}
