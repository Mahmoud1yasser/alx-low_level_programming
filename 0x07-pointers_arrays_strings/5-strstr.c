#include "main.h"
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
	const char *h = haystack;
	const char *n = needle;
	int flag = 0;
	int count = 0;

	for (; *n != '\0'; n++)
	{
		const char *h = haystack;

		for (; *h != '\0'; h++)
		{
			if (flag = 0)
			{
				memo = i;
			}
			if (*h == *n)
			{
				if (*(h + 1) == *(n + 1) && n + 1 
						!= '\0' && h + 1 != '\0')
				{
					flag = 1;
					break;
				}
				else
				{
					flag = 0;
					continue;
				}

				i++;
			}
		}
	}
	if (flag)
	{
		return(h + i);
	}
	return (NULL);
}
