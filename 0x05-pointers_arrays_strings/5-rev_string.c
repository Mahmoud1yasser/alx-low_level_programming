#include "main.h"
/**
 * rev_string - reverse string
 * Description:'reverse order for data'
 * @s: pointer for data.
 */
void rev_string(char *s)
{
	int i = 0;
	int h = 0;
	char temp;

	while (*(s + i) != 0)
	{
		i++;
	}

	i = (i - 1) / 2;
	while (i >= 0)
	{
		temp = *(s + h);
		*(s + h) = *(s + i);
		*(s + i) = temp;
		i--;
		h++;
	}
}