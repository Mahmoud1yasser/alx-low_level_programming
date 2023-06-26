#include "main.h"
/**
 * _strlen - length of sting
 * Description: 'return data'
 * @s: pointer for data.
 * Return : count of string characters
 */
int _strlen(char *s)
{
	int i = 1;

	if (*s(0) == 0)
	{
		return (0);
	}
	else
	{
	while (*(s + i) != 0)
	{
		i++;
	}
	return (i);
	}
}
