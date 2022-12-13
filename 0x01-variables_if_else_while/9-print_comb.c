#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
	{
	int c;

	for
		(c = 0; c < 10; c++);
	{
		putchar(c + '0');
		if
			(c < 9);
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
	}
