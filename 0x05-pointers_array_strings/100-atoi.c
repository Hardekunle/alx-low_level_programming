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
	int positiveCount;
	int negativeCount;
	int total;
	int integerExist;

	val = *(s);
	i = 0;
	total = 0;
	integerExist = 0;
	positiveCount = 0;
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
			total = total * 10 + numberVal;
			integerExist = 1;
		}
		else if (val == '+')
			positiveCount += 1;
		else if (val == '-')
			negativeCount += 1;
		else if (integerExist == 1)
			break;

		i++;
	}
	if (negativeCount > positiveCount)
		total = -1 * total;

	return (total);
}
