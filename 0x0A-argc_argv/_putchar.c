#include <stdio.h>
#include "main.h"

/**
 * _putchar - writes the character
 * @c: the character
 *
 * Return: on success 1,
 * on error, -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
