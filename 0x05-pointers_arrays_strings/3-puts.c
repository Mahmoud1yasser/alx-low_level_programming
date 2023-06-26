#include "main.h"
/**
 * _puts - print string
 * Description: 'prints structure of data'
 * @str: pointer for data.
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != 0)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar(10);
}
