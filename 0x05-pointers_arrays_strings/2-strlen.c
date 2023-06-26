#include "main.h"
/**
 * _strlen - length of sting
 * Description: 'return data'
 * @s: pointer for data.
 */
int _strlen(char *s)
{
	int i = 1;
	while (*(s + i) != 0)
	{
		i++;
	}
	return (i);
}
