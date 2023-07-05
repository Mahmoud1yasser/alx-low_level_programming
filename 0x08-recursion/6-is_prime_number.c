#include "main.h"
/**
 * is_divisible - Entry point
 * Description: 'divider'
 * @n: number.
 * @i: number.
 * Return: upon condition (Success)
 */
int is_divisible(int n, int i)
{
	if (i * i > n)
	{
		return (0);
	}
	else if (n % i == 0 || n % (i + 2) == 0)
	{
		return (1);
	}
	else
	{
		return (is_divisible(n, i + 6));
	}
}
/**
 * is_prime_number - prime number check
 * Description: 'program checks if number is prime'
 * @n: number to be checked
 * Return: upon condition 0 (Success)
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n <= 3)
	{
		return (1);
	}
	else if (n % 2 == 0 || n % 3 == 0)
	{
		return (0);
	}
	else
	{
		return (!is_divisible(n, 5));
	}
}
