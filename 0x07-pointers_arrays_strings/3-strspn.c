#include "main.h"
/**
 * _strspn - substring
 * Description: 'gets the lenght of a
 * prefix substring'
 * @s: destenation pointer.
 * @accept: values to compare with. 
 * Return: Always dest (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	const char *p = s;
	unsigned int count = 0;
	int found;

	while (*p != '\0') 
	{
		const char *q = accept;

		found = 0;
		for (; *q != '\0'; q++) 
		{
			if (*p == *q) 
			{
				found = 1;
				break;
			}
		}
		if (!found) 
		{
			break;
		}
		count++;
		p++;
	}

	return (count);
}
