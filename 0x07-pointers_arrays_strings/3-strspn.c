#include "main.h"
/**
 * _strspn - substring
 * Description: 'gets the lenght of a
 * prefix substring'
 * @s: destenation pointer.
 * @accept: 
 * Return: Always dest (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	const char *p = s;
	int found = 0;
	int count = 1;
	const char *q = accept;

	for (; *q !='\0'; q++)
	{
		for (; *p != '\0'; p++)
		{
			if (*p == *q)
			{
				break;
				found = 0;
			}
			count ++;
		}
		if (!found)
		{
			break;
		}
	}
return (count);
}
