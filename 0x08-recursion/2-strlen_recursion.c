#include "main.h"
/**
 * _strlen_recursion - string lenght
 * Description: 'return string lenght'
 * @s: string pointer
 * return: string lenght
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		_strlen_recursion(s + 1);
		return (_strlen_recursion(s + 1) + 1);
	}
	else
	{
	return (0);
	}
}
