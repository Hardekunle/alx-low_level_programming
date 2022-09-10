#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - print random number
 * Return: 0;
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n==0)
		printf("%d",n);
	else if(n>0)
		printf("%d",n);
	else
		printf("%d",n);
	return (0);
}
