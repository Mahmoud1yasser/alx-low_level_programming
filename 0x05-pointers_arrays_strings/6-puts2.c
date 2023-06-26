#include "main.h"
/**
 * puts2 - print string
 * Description: 'prints other characters
 * of data'
 * @str: pointer for data.
 */
void puts2(char *str)
{
	int i = 0;
	int h = 0;

	while (*(str + h) > 0)
	{
		h++;
	}
	while ((*(str + i) != 0) && i <= h)
	{
		_putchar(*(str + i));
		i = i + 2;
	}
	_putchar(10);
}
