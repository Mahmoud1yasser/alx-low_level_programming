#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: 'see the number is positive or negative'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = abs(n) % 10;

	if (l > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, l);
	}
	else if ((l != 0) && (l < 6))
	{
		printf("Last digit of %d is %d and is and is less than 6 and not 0\n", n, l);
	}
	else
	{
		printf("Last digit of %d is %d and is and is zero\n", n, l);
	}
	return (0);
}
