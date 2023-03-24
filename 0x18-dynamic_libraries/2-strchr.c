#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: The string
 * @c The character
 *
 * Return: if c is found - pointer, if c not found - NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		++s;
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);
}
