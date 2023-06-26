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

	while (h <= (i / 2))
	{
		temp = *(s + h);
		*(s + h) = *(s + i - 1 - h);
		*(s + i - 1 - h) = temp;
		h++;
	}
}
