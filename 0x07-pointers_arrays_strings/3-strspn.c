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
	int count = 0;
	const char *q = accept;

	for (; *q !='\0'; q++)
	{
	int found = 0;

		for (; *p != '\0'; p++)
		{
			if (*p == *q)
			{
				break;
				found = 1;
			}
			count ++;
		}
		if (!found)
		{
			break;
		}
	}
return (count + 1);
}
