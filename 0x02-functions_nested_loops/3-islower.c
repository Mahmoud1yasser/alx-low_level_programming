#include "main.h"
/**
 * _islower - writes alphapets
 * Description: 'check lower cases'
 * @c: character checked
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if ((c <= 122) && (c >= 97))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}



