#include "main.h"
/**
 * print_numbers - print num from 0 - 9
 * Return: Always 0
 */

void print_numbers(void)
{
	int c;

	c =  0;
	while (c < 10)
	{
		_putchar (c + '0');
	}
	_putchar ('\n');
}
