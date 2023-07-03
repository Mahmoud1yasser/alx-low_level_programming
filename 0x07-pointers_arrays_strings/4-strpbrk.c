#include "main.h"
#define NULL ((void *)0)
/**
 * _strpbrk - search fot substring
 * Description: 'gets first match'
 * @s: destenation pointer.
 * @accept: values to compare with.
 * Return: Always dest (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int found;
	int j = 0;

	for (; *s != '\0'; s++)
	{
		for (; *accept != '\0'; accept++)
		{
			if (*s == *accept)
				{
					found = 1;
					break;
				}
		}
		if (found == 1)
		{
			break;
		}
		j++;
	}
	return (s + j);
}
