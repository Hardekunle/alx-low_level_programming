#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - print random number
 * Return: 0;
 */
int main(void)
{i
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
		printf("%d is zero\n", n);
	else if (n > 0)
		printf("%d is positive\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
