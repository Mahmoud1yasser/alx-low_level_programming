#include "main.h"

/**
 * print_line - printline with lenght
 * @n: line lenght
 * Description :'print line'
 * Return : nothing
 */
void print_line(int n)
{
	int i = 1;

	while (i <= n)
	{
		i++;
		_putchar(95);
	}
	_putchar(10);
}
