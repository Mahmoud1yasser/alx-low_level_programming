#include "main.h"
#include<stdio.h>
/**
 * print_last_digit - prints last digit
 * Description: 'printer'
 * @n: number
 * @r: reminder
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
	int r = _abs(n % 10);
	_putchar(48+r);
	return r;

}
