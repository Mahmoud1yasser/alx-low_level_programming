#include "main.h"
/**
 * _puts_recursion - silimar to puts
 * Description: 'print string'
 * @s: character
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar(10);
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
