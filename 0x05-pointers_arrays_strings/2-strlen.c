#include "main.h"

/**
 * _strlen - retrun the elngth of a string
 * @s: char to check
 * Description : this will retrun tghe lenght of a string
 * Return : Always 0 (success)
 */

int _strlen(cahr *s)
{
	int a = 0;

	for (; *s++)
		a++;
	return (a);
}
