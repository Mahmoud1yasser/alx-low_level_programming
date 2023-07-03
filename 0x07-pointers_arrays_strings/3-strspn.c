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
	int count = 0;
	const char *q = accept;

	for (; *p != '\0'; p++)
	{
	int found = 0;

		for (; *q != '\0'; q++)
		{
			if (*p == *q)
			{
				found = 1;
				break;
			}
			count++;
		}
		if (!found)
		{
			break;
		}
	}
return (count + 1);
}
