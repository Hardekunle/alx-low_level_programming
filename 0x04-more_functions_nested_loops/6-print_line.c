#include "main.h"
#include <stdio.h>
/**
 *print_line- prints a character in a straightLine
 *@n: number of time to print character
 *Return: void
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("_");
	}
	printf("\n");
}
