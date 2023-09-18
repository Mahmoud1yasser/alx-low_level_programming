#include "main.h"

/**
 * print_most_numbers - print 0 to 9 not 4&2.
 * Description : ' numbers except 2&4'
 * Return : nothing
 */

void print_most_numbers(void)
{
	int i = 48;

	while (i <= 57)
	{
		if ((i == 50) || (i == 52))
		{
			i++;
		}
		else
		{
			_putchar(i);
			i++;
		}
	}
	_putchar(10);
}
