#include "main.h"
/**
 * times_table - 9 table
 * Description: 'printer'
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int num1;
	int num2;

	while (num1 <= 9)
	{
		num2 = 0;
		while (num2 <= 9)
		{
			int result = num1 * num2;
			int r1 = result % 10;
			int r2 = result % 100;

			if (result <= 9)
			{
				_putchar(48 + result);
				if (r1 != 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar(44);
				}
				else
				{
					_putchar(10);
				}
			}
			else
			{
				_putchar(48 + r2);
				_putchar(48 + r1);
				if (r1 != 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar(44);
				}
				else
				{
					_putchar(10);
				}

			num2++;
			}
		num1++;
		}
	}
}
