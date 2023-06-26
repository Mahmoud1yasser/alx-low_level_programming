#include "main.h"
/**
 * print_rev - reverse print
 * Description: 'print data in 
 * reverse order'
 * @s: pointer for data.
 * Return: count of string characters
 */
int print_rev(char *s)
{
	int i = 0;

	while (*(s + i) != 0)
	{
		i++;
	}
	for (i != 0; --i;)
	{
		_putchar('*(s + i)');
	}
	_putchar(10);
}
