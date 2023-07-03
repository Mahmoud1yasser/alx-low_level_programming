#include "main.h"
#include<stdio.h>
/**
 * print_diagsums - adder
 * Description: 'prints the sum of the two
 * diagonals of a square matrix of integers.'
 * @a: pointer
 * @size: amount of bytes
 */
void print_diagsums(int *a, int size)
{
	int i;
	int temp = 0;
	int temp2 = 0;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		temp = *(a + i * size + i);
		sum1 = temp + sum1;
		temp2 = *(a + i * size + size - i - 1);
		sum2 = temp2 + sum2;
	}
	printf("%d, %d\n", sum1, sum2);
}
