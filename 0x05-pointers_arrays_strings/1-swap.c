#include "main.h"
/**
 * swap_int - swap data.
 * Description: 'data manipulation'
 * @a: first integar
 * @b: second integar
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
