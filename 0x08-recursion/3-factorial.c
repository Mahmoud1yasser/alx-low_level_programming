#include "main.h"
/**
 * factorial - calculate factorials
 * Description: 'print string'
 * @n: number to get factorial.
 * Return: factorial on n
 */
int factorial(int n)
{
	if (n > 0)
	{
		factorial(n - 1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (1);
	}
	return (factorial(n - 1) * n);
}
