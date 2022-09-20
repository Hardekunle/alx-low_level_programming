#include "main.h"
#include <stdio.h>

void print_rev(char *s)
{
	int len;
	char val;

	val = *s;
	len = 0;
	while ( val != '\0')
	{
		len++;
		val = *(s + len);
	}

	while (len >= 0)
	{
		_putchar(*(s + len));
		len--;
	}
	
	_putchar('\n');
}
