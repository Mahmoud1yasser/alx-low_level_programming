#include "main.h"
/**
 * _strcpy - copy string
 *@dest: destenation
 *@src: main string
 * Return: dest variable
 */
char *_strcpy(char *dest, char *src)
{
	char *p = dest;

	while (*src != '\0')
	{
		*p++ = *src++;
	}
	*p = '\0';
	return (dest);
}
