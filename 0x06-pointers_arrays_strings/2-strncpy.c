#include "main.h"
/**
 * *_strncpy - copy
 * description: copy string to another
 * with n bytes.
 * @dest: destenation string
 * @src: string to be added
 * @n: number of bytes
 * Return: pointer to sting dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;
	int i = 0;

	for (j = 0; (j < n) && (*(src + i) != '\0'); j++)
	{
		*(dest + j) = *(src + i);
		i++;
	}
	for ( ; j < n; j++)
	{
		*(dest +j) = '\0';
	}
	return (dest);
}
