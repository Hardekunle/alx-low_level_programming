#include "main.h"

/**
 *swap_int- swap the values of a and b
 *@a: pointer variable for a
 *@b: pointer variable for b
 *Return: void
 */
void swap_int(int *a, int *b)
{
	int aVal;
	int bVal;

	aVal = *a;
	bVal = *b;

	*a = bVal;
	*b = aVal;
}
