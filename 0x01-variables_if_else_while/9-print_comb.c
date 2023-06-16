#include <stdio.h>
/**
 * main - Entry point
 * Description: writes sigle decel
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
		putchar (44);
		putchar (32);
	}
	putchar(10);
	return (0);
}
