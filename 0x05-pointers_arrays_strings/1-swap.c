#include "main.h"

/**
 * swap_int - swaps the value of int a and int b
 *
 * @a: first integer
 * @b: second integer
 * Return: Always 0 (success)
 */

void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
