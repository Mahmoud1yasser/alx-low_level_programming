#include "main.h"

/**
 * *rot13 - encoder.
 * Description: encodes to rot13.
 * @str: string to be changed
 * Return: pointer to sting dest.
 */
char *rot13(char *str)
{
	int j;
	int i;
	char dec[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char enc[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *result = malloc(strlen(str) + 1);
	for (j = 0; str[j] != '\0'; j++)
	{
		for (i = 0; i < 52; i++)
		{	
			if (*(str + j) == *(dec + i))
			{
				*(str + j) = *(enc + i);
			}
		}
	}
	return (str);
}
