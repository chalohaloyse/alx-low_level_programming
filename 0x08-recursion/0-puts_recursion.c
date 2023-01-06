#include "main.h"

/**
 * _puts_recursion - prints a string followed by new line
 * @s: pointer to string
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	inf(*s == '\0') /* base case*/

	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
