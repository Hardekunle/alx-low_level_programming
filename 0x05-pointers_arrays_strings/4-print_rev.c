#include "main.h"
#include <stdio.h>
/**
 * print_rev - Prints a string in reverse.
 * @s: string to be reserved.
 */
void print_rev(char *s)
{
	int len;
	char val;

	val = *s;
	len = 0;
	while (val != '\0')
	{
		len++;
		val = *(s + len);
	}

	len -= 1;
	while (len >= 0)
	{
		_putchar(*(s + len));
		len--;
	}

	_putchar('\n');
}
