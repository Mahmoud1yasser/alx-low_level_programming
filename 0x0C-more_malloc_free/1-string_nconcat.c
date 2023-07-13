#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concates 2 strings
 * @s1: first string.
 * @s2: second string.
 * @n: first n bytes of s2.
 * Return: concatenated string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i;
	char *conc;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = strlen(s1);
	len2 = strlen(s2);
	if (n >= len2)
	{
		n = len2;
	}
	conc = malloc(len1 + len2 + 1);
	if (conc == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		conc[i] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
		conc[len1 + i] = s2[i];
	}
	conc[len1 + n] = '\0';
	return (conc);
}
