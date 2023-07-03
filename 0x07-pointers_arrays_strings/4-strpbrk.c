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
	const char *ss = s;
	const char *a = accept

	for (; *ss != '\0'; ss++)
	{
		for (; *a != '\0'; a++)
		{
			if (*ss == *a)
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
