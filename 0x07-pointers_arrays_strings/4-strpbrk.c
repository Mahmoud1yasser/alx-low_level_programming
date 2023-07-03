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
	int i = 0;
	int j = 0;

	for (j = 0; *(s + j) != '\0'; j++)
	{
		for (i = 0; *(accept + i) != '\0'; i++)
		{
			if (*(s + j) == *(accept + i))
				{
					found = 1;
					break;
				}
		}
		if (found == 1)
		{
			break;
		}
	}
	return (s + j);
}
