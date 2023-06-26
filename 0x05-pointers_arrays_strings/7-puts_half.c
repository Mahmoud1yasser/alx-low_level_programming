#include "main.h"

/**
 * puts_half - function
 * Description: 'print second half of
 * string'
 * @str: pointer for string
 */
void puts_half(char *str)
{
	int i = 0;

	while (*(str + i) != 0)
	{
		i++;
	}

	if ((i - 1) % 2 == 1)
	{
		int n = (i - 1) / 2;

		while (n < i)
		{
			_putchar(*(str + n));
			n++;
		}
	}
	else
	{
		int n = i / 2;

		while (n < i)
		{
			_putchar(*(str + n));
			n++;
		}
	}
	_putchar(10);
}
