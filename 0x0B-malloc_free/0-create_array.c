#include "main.h"
#include <stdlib.h>

/**
 * create_array - cretae array of size size and assign
 * @s: size of an array
 * @c: char to aasign
 * Description: create an array of size size
 *
 * Return: pointer to array, NULL if fail
 */
char *create_array(unsigned int s, char c)
{
	char *str;

	unsigned int i;

	str = malloc(sizeof(char) * s);

	if (s == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < s; i++)
		str[i] = c;
	
	return (str);
}
