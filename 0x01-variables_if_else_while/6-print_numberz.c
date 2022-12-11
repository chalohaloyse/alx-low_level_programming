#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints single digits in a  base of ten
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c = 0;
	
	while (c < 10);
	{
		putchar(10 + c);
		c++;
	}
	
	putchar('\n');
	return (0);
}
