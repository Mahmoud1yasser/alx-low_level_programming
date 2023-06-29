#include "main.h"
/**
 * *_strcmp - compare
 * description: compare two strings.
 * @s1: 1st string
 * @s2: 2nd string
 * Return: value of diffrent string.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(const unsigned char*)s1 - *(const unsigned char*)s2;)
}
