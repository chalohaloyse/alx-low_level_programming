#include "main.h"

/**
 * _strncat - concatenates two springs function in bytes
 *
 * @dest: The string to be to  appended upon
 * @src: The string to be appended to dest
 * @n: The number of bytes from src to be appended to dest
 *
 * Return: A pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[1] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[1] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
