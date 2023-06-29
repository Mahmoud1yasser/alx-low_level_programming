#include "main.h"
/**
 * *_strcat - concatenation
 * description: concatenate two strings
 * @dest: destenation string
 * @src: string to be added
 * Return : pointer to sting dest.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j;
	int len;

	for (len = 0; *(dest + len) != '\0'; len++)
	{}
	for (j = 0; *(src + i) != '\0'; j++)
	{
		
		*(dest + len + j) = *(src + i);
		i++;
	}
	*(dest + j + len) = '\0';
	return (dest);
}
