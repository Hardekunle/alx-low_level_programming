#include "main.h"
#include <stdio.h>
/**
 *print_array- prints the value of elements in array
 *@a: pointer variable to first element
 *@n: number of elements to print
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n ; i++)
	{
		printf("%d", *(a + i));
		if (i != n - 1)
			printf(", ");
	}
}
