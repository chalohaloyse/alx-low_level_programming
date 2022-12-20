#include "main.h"

/**
 * print_array - a function that prints n elements on an array
 * @a: array name
 * @n: number of elements
 * Return: a and n
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d,", a[i]);
	}
	if (i == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
