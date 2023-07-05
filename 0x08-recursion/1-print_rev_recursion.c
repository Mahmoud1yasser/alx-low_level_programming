#include "main.h"
/**
 * _puts_recursion - silimar to puts
 * Description: 'print string'
 * @s: character
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
	_print_rev_recursion(s + 1);
	}
	_putchar(*s);
		return;
	_putchar(10);
}
