#include "main.h"

/**
 * _memset - Fills the first n bytes of memory area
 * pointed to by @s with constant byte @c
 * @s: A pointer to the meomory area to be filled
 * @c: Character to fill the memory
 * @n: The number of bytes to be filled
 *
 * Description_memset: over there
 *
 * Return: Pointer tofilled memory area @s
 */

void *_memset(void *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
