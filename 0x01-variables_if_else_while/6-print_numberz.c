#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints single digits in a  base of ten
 *
 * Retun: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num - 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}
