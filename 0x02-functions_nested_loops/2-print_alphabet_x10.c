#include "main.h"
/**
 * print_alphabet - writes alphapets
 * Description: 'print alphabets'
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
int i = 97;
int n = 0;

	while (n<10)
	{

	while (i < 123)
		{
		_putchar(i);
		i++;
		}
	_putchar(10);
	n++;
	}
}


