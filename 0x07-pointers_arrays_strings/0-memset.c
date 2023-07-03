#include "main.h"
/**
 * _memset - fill memory
 * Description: 'fills memory with
 * constant byte'
 * @s: pointer.
 * @b: charachter.
 * @n: amount of bytes
 *
 * Return: Always S (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
return (s);
}
