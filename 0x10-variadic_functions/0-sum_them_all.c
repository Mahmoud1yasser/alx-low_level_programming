#include "variadic_functions.h"

/**
 * sum_them_all - sums integrs
 * @n: integers list
 * Return: result
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n != 0)
	{
		va_list ap;
		int i;
		unsigned int j = n;
		int result = 0;

		va_start(ap, n);
		i = va_arg(ap, int);
		for ( ; j > 0; i = va_arg(ap, int))
		{
			result = i + result;
			j--;
		}
		va_end(ap);
		return (result);
	}
	return (0);
}
