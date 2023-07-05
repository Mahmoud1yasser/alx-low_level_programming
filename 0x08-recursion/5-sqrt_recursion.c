#include "main.h"
/**
 * _sqrt_recursion - calculate natural
 * square root'
 * Description: 'calculate squrt'
 * @n: number to get squrt for.
 * Return: squrt
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (sqrt_helper(n, 1, n));
	}
}
/**
 * sqrt_helper - calculate natural
 * square root'
 * Description: 'calculate squrt'
 * @n: number to get squrt for.
 * @start: were calculation starts.
 * @end: were calculation stop.
 * Return: squrt
 */
int sqrt_helper(int n, int start, int end)
{
	int mid;
	if (end >= start)
	{
		mid = start + (end - start) / 2;
		if (mid * mid == n)
		{
			return (mid);
		}
		else if (mid * mid > n)
		{
			return (sqrt_helper(n, start, mid - 1));
		}
		else
		{
			return (sqrt_helper(n, mid + 1, end));
		}
	}
	return (-1);
}
