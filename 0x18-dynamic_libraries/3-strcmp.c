#include "main.h"

/**
 * _strcmp - compares pointing to two strings
 * @s1: A pointer to the first strings to be compared.
 * @s2: A pointer to the second strings to be compared.
 *
 * Return: If str1 < str2, the -ve difference of the first unmatched char
 * If str1 == str2, 0
 * If str1 > str2, the +ve difference of the first unmatched char
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)

	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
