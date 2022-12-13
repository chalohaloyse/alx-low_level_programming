#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all possible combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int (a = 0);

	while
		(a < 9)
		{
			putchar(a + 48);
			if
				(a != 9)
				{
					putchar(',');
					putchar(' ');
				}
			a++;
		}
	putchar('\n');
	return (0);
}
