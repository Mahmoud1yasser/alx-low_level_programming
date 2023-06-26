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
	char a = "";

	while (*(s + i) != 0)
	{
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		*(a + h) = *(s + i));
		i--;
		h++;
	}
}
