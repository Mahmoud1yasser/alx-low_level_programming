#include "main.h"

/**
 * more_numbers - print 0 to 14 10 times.
 * Description : '10 lines of 0 to 14
 * Return : nothing
 */

void more_numbers(void)
{
	int i = 48;
	int j = 0;
	int t = 0;

	while (t < 10)
	{
		j = 0;
		i = 48;
		while (j <= 9)
		{
			_putchar(i);
			i++;
			j++;
		}
		i = 48;
		while (j >= 9 && j <= 14)
		{
			_putchar(49);
			_putchar(i);
			j++;
			i++;
		}
		t++;
	_putchar(10);
	}
}
