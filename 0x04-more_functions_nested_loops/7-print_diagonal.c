#include "main.h"
#include <stdio.h>
/**
 *print_diagonal- prints diangonal for a given length
 *@n: size of diagonal
 *Return: void
 */
void print_diagonal(int n)
{
	int whiteSpace;
	int i;

	if (n <= 0)
		_putchar('\n');

	for (i = 1; i <= n; i++)
	{
		whiteSpace = i - 1;
		while (whiteSpace > 0)
		{
			_putchar(' ');
			whiteSpace--;
		}

		_putchar('\\');
		_putchar('\n');

	}
}
