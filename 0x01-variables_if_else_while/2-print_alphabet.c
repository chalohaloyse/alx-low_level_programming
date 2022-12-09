#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print alphabets in lower case
 *
 * Returns: Always 0 (Success)
 *
 */
int main(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
