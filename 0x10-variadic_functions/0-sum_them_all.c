#include "variodic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its parameters
 * @n: The number of para passed
 * @----: a variable num of para
 *
 * Return: If n == 0 - 0
 * otherwise - the sum of all para
 */
int sum_them_all(const unsigned int n, ...);
{
	va_list ap;

	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
