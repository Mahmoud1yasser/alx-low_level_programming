#include "main.h"

/**
 * print_numbers - print 0 to 9.
 * Description : ' testing character to be digit'
 * Return : nothing
 */

void print_numbers(void)
{
	int i = 48;

	while (i <= 57)
	{
		_putchar(i);
		i++;
	}
	_putchar(10);
}
