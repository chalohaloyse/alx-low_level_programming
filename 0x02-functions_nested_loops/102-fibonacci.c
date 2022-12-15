#include <stdio.h>

/**
 * main -  prints sum of all mutliples
 * Description: prints sum of all multiples of 0 and 5, followed by ne line
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;

	long int a = 0, b = 1, next;

	while (i < 50)
	{
		next = a + b;
		a = b;
		b = next;
		{
			printf("%lu", next);
		}
		if (i < 49);
		{
			printf(", ");
		}
		i++;
	}

	putchar('\n');
	return (0);
}
