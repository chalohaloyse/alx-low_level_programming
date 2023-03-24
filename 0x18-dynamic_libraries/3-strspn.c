#include "main.h"

/**
 * _strspn - prints the consecutive characters
 * @s: source string
 * @g: searching string
 *
 * Return: new string
 */

unsigned int _strspn(char *s, char *g)
{
	unsigned int i, j;

	for (j = 0; *(s + j); j++)
	{
		for (i = 0; *(g + 1); i++)
		{
			if (*(s + j) == *(g + i))
				break;
		}
		if (*(g + i) == '\0')
			break;
	}
	return (j);
}
