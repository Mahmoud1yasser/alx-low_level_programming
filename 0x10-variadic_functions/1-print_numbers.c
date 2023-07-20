#include "variadic_functions.h"
/**
 * print_numbers - prints numbers,
 * followed by a new line
 * @separator: character to separate numbers.
 * @n: count of numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i;
	unsigned int j = n;

	va_list ap;
	va_start(ap, n);
	i = va_arg(ap, int);
	for (; j > 0; j--)
	{
		if (j != 1 && separator != NULL)
		{
			printf("%d%s", i, separator);
		}
		else
		{
			printf("%d", i);
		}
	i = va_arg(ap, int);
	}
	putchar('\n');

}
