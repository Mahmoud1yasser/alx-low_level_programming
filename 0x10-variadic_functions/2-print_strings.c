#include "variadic_functions.h"

/**
 * print_strings - prints nstrings,
 * followed by a new line
 * @separator: character to separate numbers.
 * @n: count of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *i;
	unsigned int j = n;
	va_list ap;

	va_start(ap, n);
	i = va_arg(ap, char *);
	for (; j > 0; j--)
	{
		if (j != 1 && separator != NULL)
		{
			printf("%s%s", i, separator);
		}
		else if (i == NULL)
		{
			printf("%s","(nil)");
		}
		else
		{
			printf("%s", i);
		}
	i = va_arg(ap, char *);
	}
	putchar('\n');

}
