#include "main.h"
/**
 * *_strncat - concatenation
 * description: concatenate two strings
 * with n bytes
 * @dest: destenation string
 * @src: string to be added
 * @n: number of bytes
 * Return : pointer to sting dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int j;
	int i = 0;
	int len;

	for (len = 0; *(dest + len) != '\0'; len++)
	{}
	for (j = 0; (j < n) && (*(src + i) != '\0'); j++)
	{
		*(dest + len + j) = *(src + i);
		i++;
	}
	*(dest + j + len) = '\0';
	return (dest);
}
