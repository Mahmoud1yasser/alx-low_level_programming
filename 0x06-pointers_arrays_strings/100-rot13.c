#include "main.h"

/**
 * *leet - encoder.
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
