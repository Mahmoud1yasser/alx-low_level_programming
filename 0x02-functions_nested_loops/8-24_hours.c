#include "main.h"
/**
 * jack_bauer - timer
 * Description: '24 hr timer'
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
	int s1;
	int s2;
	int min1;
	int min2;
	while(min1 >=2)
	{
		while(min2 >=3)
		{
			while(s2 >= 5)
			{
				while(s1 >=9)
				{
					s1++;
					_putchar(48 + min1);
					_putchar(48 + min2);
					_putchar(58);
					_putchar(48 + s2);
					_putchar(48 + s1);
				}
			s2++;
			}
		min2++;
		}
	min1++;
	}
}
