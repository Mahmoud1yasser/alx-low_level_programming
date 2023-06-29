#include "main.h"
/**
 * *_strcmp - compare
 * description: compare two strings.
 * @s1: 1st string
 * @s2: 2nd string
 * Return : value.
 */
int _strcmp(char *s1, char *s2)
{
	int len1;
	int len2;
	int total1 = 0;
	int total2 = 0;

	for (len1 = 0; *(s1 +len1) != '\0'; len1++)
	{
		total1 = *(s1 + len1) + total1;
	}
	for (len2 = 0; *(s2 +len2) != '\0'; len2++)
	{
		total2 = *(s2 + len2) + total2;
	}
	if (total1 == total2)
	{
		return (0);
	}
	else if (total1 > total2)
	{
		return (total1 - total2);
	}
	else
	{
		return (total1 - total2);
	}
}
