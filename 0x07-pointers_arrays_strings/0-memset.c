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

void *_memeset(void *s, int c, size_t n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
