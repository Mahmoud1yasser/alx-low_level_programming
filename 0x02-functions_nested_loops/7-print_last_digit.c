#include "main.h"
/**
 * print_last_digit - prints last digit
 * Description: 'printer'
 * @n: number
 * @r: reminder
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
	int r = (n % 10);
	if (r >=0)
	{
		_putchar(48+r);
		return r;
	}
	else
	{
		r = -r;
		_putchar(48+r);
		return (r);
	}

}
