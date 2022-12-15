#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: computes and prints all multiples of 3
 * Return: Awalys 0 (success)
 */
int main(void)
{
	int c = 0;
	int sum = 0;

	while (c < 1024)
	{
		if (c % 3 == 0 || c % 5 == 0)
		{
			sum += c;
		}
		c++;
	}
	printf("%i\n", sum);
	return (0);
}
