#include "main.h"
/**
 * _memcpy - copy memory
 * Description: 'copy memory from
 * src to dest'
 * @dest: destenation pointer.
 * @src: data pointer .
 * @n: amount of bytes
 *
 * Return: Always dest (Success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char temp;

	for (i = 0; i < n; i++)
	{
		temp = *(src + i);
		*(dest + i) = temp;
	}
return (dest);
}
