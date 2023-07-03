#include "main.h"
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
	unsigned int found = 0;

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
		s = '\0';
	}
	return (s);
}
