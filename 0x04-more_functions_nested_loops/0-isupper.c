#include "main.h"
/**
 * main - check the code.
 * Description : ' testing characrters to be lower case'
 *@c: is character too investgate
 * Return: Always 0 or 1.
 */
int _isupper(int c)
{
	if (c <= 90 && c >= 65)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
