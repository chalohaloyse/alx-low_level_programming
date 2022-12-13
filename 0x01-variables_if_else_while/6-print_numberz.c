#include <stdio.h>
#include <stdlib.h>

/**
 * main- Print output of numbers 0 and 10
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int c = 0;

	while (c < 10)
	{
		putchar(48 + c);
		c++;
	}

	putchar('\n');
	return (0);
}
