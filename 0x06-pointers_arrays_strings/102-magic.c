#include <stdio.h>

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;

	/*
	 * write your code line here....
	 * remember:
	 * main - magic
	 * -you are NOT allowed to us 'a'
	 *  -you are not allowed to modify 'p'
	 *  -one statement
	 */

	*(p + 5) = 98;
	/* ..... so that this prints 98\n*/
	printf("a[2] = %d\n", a[2]);

	return (0);
}
