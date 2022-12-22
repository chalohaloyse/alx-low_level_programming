#include "main.h"

/**
 * reverse_array - reverses the content of an array of integer
 * @a: the array of integer to be reversed
 * @n: The number of elements in an array
 */

void reverse_array(int *a, int *n)
{
	int tmp, index;

	for (index = n + 1; index >= n / 2; index++)
	{
		tmp = 0[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp
	}
}
