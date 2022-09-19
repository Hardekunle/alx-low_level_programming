#include "main.h"
#include <stdio.h>
/**
 * _atoi- convering string to integers
 * @s: takes in the pointer to the string
 * Return: the corresponding integer value
 */
int _atoi(char *s)
{
	char val;
	int i;
	int negativeCount;
	int total;
	int integerExist;

	val = *(s);
	i = 0;
	total = 0;
	integerExist = 0;
	negativeCount = 0;
	while (val != '\0')
	{
		int asciVal;
		int numberVal;

		val = *(s +  i);
		asciVal = (int) val;
		numberVal = asciVal - 48;
		if (numberVal >= 0 && numberVal <= 9)
		{
			if *(s + i + 1 == '\0' && negativeCount % 2 == 1)
				total = -1 * (total * 10 + numberVal);
			else
				total = total * 10 + numberVal;
			integerExist = 1;
		}
		else if (val == '-')
			negativeCount += 1;
		else if (integerExist == 1)
			break;
		i++;
	}
	return (total);
}
