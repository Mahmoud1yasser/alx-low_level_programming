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
	int j;
	int a[] = {32, 9, 10, 44, 59, 46, 33,
		40, 41, 63, 123, 125, 34};

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0 && (str[i] > 96 && str[i] < 123))
		{
			 str[i] -= 32;
		}
		for (j = 0; j < 14; j++)
		{
			if (str[i] == a[j])
			{
				if (str[i + 1] > 96 && str[i + 1] < 123)
				{
					str[i + 1] -= 32;
				}
			}
		}
	}
	return (str);
}
