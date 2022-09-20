#include "main.h"
#include <stdlib.h>
/**
 *_strlen- calculates the length of the string
 *@s: pointer variable to first element in array s
 *Return: int
 */
int _strlen(char *s)
{
	int number;
	char val;

	val = *s;
	number = 0;

	while (val != '\0')
	{
		number++;
		val = *(s + number);
	}
	return (number);
}
