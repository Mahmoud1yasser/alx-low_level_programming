#include "main.h"
#define NULL ((void *)0)
/**
 * _strchr - search character
 * Description: 'search for indecated
 * character'
 * @s: data to search in.
 * @c: character to search for
 * Return: Always s (Success)
 */
char *_strchr(char *s, char c)
{
	unsigned int i;
	int found;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
			found = 1;
		}
	}
	if (!i && !found)
	{
		s = NULL;
	}
	return (s);
}
