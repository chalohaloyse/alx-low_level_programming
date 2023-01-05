#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: The string
 * @c The character
 *
 * Return: if c is found - pointer, if c not found - NULL
 */char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return   ('\0')
}
