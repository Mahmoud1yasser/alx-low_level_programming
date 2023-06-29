#include "main.h"
/**
 * cap_string - manupilate.
 * description: change lower to
 * upper case.
 * @str: to be changed.
 * Return: changed text.
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (
				i == 0 ||str[i - 1] == ' ' || str[i - 1] == '\t' ||
				str[i - 1] == '\n' || str[i - 1] == ',' ||
				str[i - 1] == ';' || str[i - 1] == '.' ||
				str[i - 1] == '!' || str[i - 1] == '?' ||
				str[i - 1] == '"' || str[i - 1] == '(' ||
				str[i - 1] == ')' || str[i - 1] == '{' ||
				str[i - 1] == '}'
				)
		{
				if (str[i] > 96 && str[i] < 123)
				{
					str[i] -= 32;
				}
		}
	}
	return (str);
}
