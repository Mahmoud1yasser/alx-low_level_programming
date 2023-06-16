#include <stdio.h>
/**
 * main - Entry point
 * Description: write the alphapt not e,q
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 97;

	while (i < 123)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
			i++;
		}
		else
		{
			i++;
		}
	}
	putchar(10);
	return (0);
}
