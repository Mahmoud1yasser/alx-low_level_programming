#include <stdio.h>
/**
 * main - Entry point
 * Description: writes none duplicated decimal
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 48;

	while (i < 58)
	{
		int j = 48;

		while (j < 58)
		{
			if (i != j)
			{
				putchar(i);
				putchar(j);
				if (i < 57 && j < 57)
				{
					putchar (44);
					putchar (32);
				}
				else
				{
					j++;
				}
			}
			else 
			{
				j++;
			}
		i++;
		}
	}
	putchar(10);
	return (0);
}
