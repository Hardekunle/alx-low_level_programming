#include "main.h"

/**
 * puts2 - Prints character in even postion.
 * @str: string.
 */
void puts2(char *str)
{
	int len;
	int i;
	char val;

	len = 0;
	val = *str;
	while (val != '\0')
	{
		len++;
		val = *(str + len);
	}

	i = 0;
	while (i < len)
	{
		_putchar(*(str + i));
		i += 2;
	}

	_putchar('\n');
}
