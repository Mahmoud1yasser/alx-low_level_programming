#include "main.h"
/**
 * set_string - double pointer.
 * Description: 'set value of 
 * pointer to char'
 * @s: pointer.
 * @to: characters
 */
void set_string(char **s, char *to)
{
	int i, len = 0;
	char *temp;

	while (*(*s + len) != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		*(temp + i) = *(*s + i);
	}
	*(temp + len) = '\0';
	to = temp;
}
