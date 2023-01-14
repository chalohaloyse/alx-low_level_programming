#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the char c tostdout
 * @c: Char
 *
 * Return: On Success 1, or error -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
