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

	for (; *s != '\0'; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
