#include "main.h"
/**
 * helperFunction - checks if sqrt of numbers exits
 * @num: number
 * @pSqrt: possible sqrt of number
 *
 * Return: sqrt of num or -1 for error
 */
int helperFunction(int num, int pSqrt)
{
	if ((pSqrt * pSqrt) == num)
	{
		return (pSqrt);
	}
	else
	{
		if ((pSqrt * pSqrt) > num)
			return (-1);
		else
			return (helperFunction(num, pSqrt + 1));
	}
}

/**
 * _sqrt_recursion - returns the natural sqrt of num
 * @n: number
 *
 * Return: sqrt of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (helperFunction(n, 0));
}
