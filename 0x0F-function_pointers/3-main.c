#include "3-calc.h"

/**
 * main - entry point
 * @argc:number of arguments
 * @argv:equation string
 * Return: 0 (Success)
 */
int main(int argc, char **argv)
{
	int (*operator)(int, int), num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num2 = atoi(argv[3]);
	num1 = atoi(argv[1]);

	operator = get_op_func(argv[2]);
	if ((argv[2][0] == '%' || argv[2][0] == '/') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		return (100);
	}
	if (operator == NULL)
	{
		printf("Error\n");
		return (99);
	}
	printf("%d\n", operator(num1, num2));
	return (0);
}
