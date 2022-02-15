#include "sort.h"

/**
 * _swap - swap two numbers.
 * @a: integer
 * @b: integer
 */

void _swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
