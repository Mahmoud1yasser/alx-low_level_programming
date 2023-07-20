#include "variadic_functions.h"

/**
 * print_all - prints all types,
 * followed by a new line
 * @format: list of types of arguments
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	const char *p = format;
	
	va_start(ap, format);
	while (*p != '\0')
	{
		switch (*p)
		{
			case 'i':
				printf("%d ", va_arg(ap, int));
				break;
			case 'f':
				printf("%f ", va_arg(ap, double));
				break;
			case 's':
				{
					char *temp = va_arg(ap,char *);
					if (temp != NULL)
					{
						printf("%s ", temp);
					}
					else
					{
						printf("%s ", "(nil)");
					}
					break;
				}
			case 'c':
				printf("%c ", va_arg(ap, int));
				break;
			default:
				break;
		}
		p++;
	}
	va_end(ap);
	putchar('\n');
}
