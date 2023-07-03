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
	int i;
	int j;

	for (i = 0; *(s + i) != '\0'; i++)
	{

		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if ((*(s + i)) == (*(accept + j)))
				{
					return (s + i);
					break;
				}
		}
	}
		if (*s == *accept)
		{
			return (s + i);
		}
return (NULL);
}
