#include <stdio.h>
#include <stdlib.h>

/**
 * main- Print numbers between 0 and 10
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++);
	{
		putchar((num % 10) + '0');
	}
	putchar('\n');
	return (0);
}
