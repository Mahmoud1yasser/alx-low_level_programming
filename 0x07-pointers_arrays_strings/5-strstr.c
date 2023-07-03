#include "main.h"
#define NULL ((void *)0)
/**
 * _strstr - find string
 * Description: 'find first string match
 * in string'
 * @haystack: destenation pointer.
 * @needle: values to compare with.
 * Return: Always dest (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0') 
	{
        return haystack;
	}
	while (*haystack != '\0') 
	{
		char *q =needle;
		char *r = haystack;

		while (*q != '\0' && *q == *r)
		{
			q++;
			r++;
		}
		if (*q == '\0') 
		{
			return haystack;
		}
		haystack++;
	}
	return NULL;
}
