#include "main.h"
/**
 * _pow_recursion - raised power
 * Description: 'calculates number
 * to the power of number.
 * @x: number.
 * @y: power number.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return(_pow_recursion(x, y - 1) * x);
	}
}
