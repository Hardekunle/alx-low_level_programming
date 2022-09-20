#include "main.h"

/**
 * puts_half - Prints second half of string
 * @str: string.
 */
void puts_half(char *str)
{
	int len, i, start;
	char val;

	len = 0;
	val = *str;
	while (val != '\0')
	{
		len++;
		val = *(str + len);
	}


	if (len % 2 == 1)
		start = (len / 2) + 1;
	else
		start = (len / 2);

	for (i = start; i < len; i++)
	{
		_putchar(*(str + i));
	}

	_putchar('\n');
}
