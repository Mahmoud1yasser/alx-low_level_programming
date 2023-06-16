#include <stdio.h>
/**
 * main - Entry point
 * Description: writes base hexa
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 48;
	int j=97;

	while (i < 58)
	{
		putchar(i);
		i++;
	}
	while (j < 103)
	{
		putchar(j);
		j++;
	}
	putchar(10);
	return (0);
}
