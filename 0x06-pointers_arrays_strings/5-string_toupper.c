#include "main.h"
/**
 * *string_toupper - manupilate.
 * description: change lower to
 * upper case.
 * Return: changed letter.
 */
char *string_toupper(char *letter)
{
	int i;

	for(i = 0; *(letter + i) != '\0';i++)
	{
		if (*(letter + i) > 96 && *(letter + i) < 123)
		{
			*(letter + i) = *(letter + i) - 32;
		}
	}
	return (letter);
}
