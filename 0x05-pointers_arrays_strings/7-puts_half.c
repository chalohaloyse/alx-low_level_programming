#include "main.h"

/**
 * puts_half - a function that prints half of a string
 * if odd leb, n = (length_of_the_string - 1)/2
 * @str: input
 * Return: half of input
 */

void puts_half(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	str -= (len / 2);
	while (str != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
