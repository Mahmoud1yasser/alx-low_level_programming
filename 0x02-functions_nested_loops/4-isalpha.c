#include "main.h"
/**
 * _isalpha - writes alphapets
 * Description: 'check lower cases'
 * @c: character checked
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	if (((c <= 122) && (c >= 97)) || ((c <= 90) && (c >= 65)))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}



