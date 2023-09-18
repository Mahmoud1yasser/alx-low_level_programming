#include "main.h"
/**
 * print_diagonal - Entry point
 * Description: 'the program's description'
 * @n: describe the parameter
 * Return: Always 0 (Success)
 */
void print_diagonal(int n)
{
	int i = 1;
	int j = 1;

	while (i <= n && n > 0)
	{
		j = 1;
		while (j <= i)
		{
			_putchar(32);
			j++;
		}
		i++;
		_putchar(92);
		_putchar(10);
	}
	if (n <= 0)
	{
		_putchar(10);
	}
}
