#include <stdio.h>
/**
 * main - Entry point
 * Description: writes lower uppr cases
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 97;
	int j = 65;

	while (i < 123)
	{
		putchar(i);
		i++;
	}
	while (j < 91)
	{
		putchar(j);
		j++;
	}
	putchar(10);
	return (0);
}
