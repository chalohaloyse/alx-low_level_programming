#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destinantion
 * @src: source
 * @n: max bytes to use
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}

	return (dest);
}
