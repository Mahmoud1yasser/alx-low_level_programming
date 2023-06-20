#include "main.h"
/**
 * iprint_sign - check sign
 * Description: 'return sign'
 * @c: character checked
 * Return: Always 0 (Success)
 */
signed int print_sign(signed int n)
{
	if (n > 0)
	{
		return (1);
		_putchar(43);
	}
	else if (n == 0)
	{
		return (0);
		_putchar(48);
	}
	else
	{
		return (-1);
		_putchar(45);
	}
}
