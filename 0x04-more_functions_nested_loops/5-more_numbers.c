#include "main.h"

/**
 * more_numbers - print 0 to 14 10 times.
 * Description : '10 lines of 0 to 14
 * Return : nothing
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j <= 9)
			{
				_putchar('0' + j);
			}
			else
			{
				_putchar('0'+1);
				_putchar('0' + j - 10);
			}

				
		}
	_putchar(10);	
	}
}
