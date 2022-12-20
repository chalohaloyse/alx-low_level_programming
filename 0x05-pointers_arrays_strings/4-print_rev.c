#include "main.h"

/**
 * print_rev - imprime and reverse
 * @s: string
 * Return: 0
 */

void print_rev(char *s)
{
	int pr = 0;
	int y;

	while (*s != '\0')
	{
		pr++;
		s++;
	}
	s--;
	for (y = pr; y > 0; y--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
