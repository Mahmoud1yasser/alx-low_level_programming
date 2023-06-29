#include "main.h"
/**
 * *string_toupper - manupilate.
 * description: change lower to
 * upper case.
 * @letter: to be changed.
 * Return: changed letter.
 */
char *cap_string(char *letter)
{
	int i;
	int j;
	int a[] = {32, 9, 10, 44, 59, 46, 33, 40, 41, 63, 123, 125, 34};

	for (i = 0; *(letter + i) != '\0'; i++)
	{ 
		for ( j = 0; a[j] != '\0'; j++)
		{
			if (*(letter + i) == a[j])
			{
				if (*(letter + i + 1) > 96 && *(letter + i + 1) < 123)
				{
					*(letter + i + 1) = *(letter + i + 1) - 32;
				}
			}
		}
	}
	return (letter);
}
