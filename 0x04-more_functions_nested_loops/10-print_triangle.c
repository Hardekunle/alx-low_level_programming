#include "main.h"

/**
 * print_triangle- prints the shape of a triangle
 * @size: the size of the triangle
 * return: void
 */
void print_triangle(int size)
{
	int currentSize;

	if (size <= 0)
		_putchar('\n');

	for (currentSize = 1; currentSize <= size; currentSize++)
	{
		int spaceCount;
		int hashCount;

		hashCount = currentSize;
		spaceCount = size - currentSize;

		while (spaceCount > 0)
		{
			_putchar(' ');
			spaceCount--;
		}

		while (hashCount > 0)
		{
			_putchar('#');
			hashCount--;
		}
		_putchar('\n');
	}

}
