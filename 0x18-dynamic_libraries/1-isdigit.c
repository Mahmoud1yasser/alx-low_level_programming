#include "main.h"

/**
 * _isdigit - check the code.
 * Description : ' testing character to be digit'
 *@c: is digit investgate
 * Return: 0 or 1 (Success)
 */

int _isdigit(int c)
{
	if ((c <= 57) && (c >= 48))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
