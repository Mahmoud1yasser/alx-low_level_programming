#include "main.h"
/**
 * print_alphabet_x10 - writes alphapets 10 times
 * Description: 'print alphabets'
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
int n = 0;

	while (n < 10)
	{
		int i = 97;

		while (i < 123)
		{
		_putchar(i);
		i++;
		}
	_putchar(10);
	n++;
	}
}
