#include "main.h"

/**
 * *leet - encoder.
 * Description: encodes to 1337.
 * @str: string to be changed
 * Return: pointer to sting dest.
 */
char *leet(char *str)
{
	int j;
	int i;
	char lower[] = {'a', 'e', 'o', 't', 'l'};
	char upper[] = {'A', 'E', 'O', 'T', 'L'};
	char i1337[] = {52, 51, 48, 55, 49};

	for (j = 0; str[j] != '\0'; j++)
	{
		for (i = 0; i <= 4; i++)
			if (str[j] == lower[i] || str[j] == upper[i])
			{
				str[j] = i1337[i];
			}
	}
	return (str);
}
