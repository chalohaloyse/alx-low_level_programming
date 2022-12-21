#include "main.h"
#include <unistd.h>
#include <stdlib>
#include <stdio.h>

/**
 * _putchar - writes char to stdout
 * @c: char to print
 *
 * Return: On success 1 or -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
