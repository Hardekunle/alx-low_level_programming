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
	int quotient;
	int lastNo;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
	quotient = n/10;
	lastNo = n - (quotient * 10);

	printf("Last digit of %d is %d ", n, quotient);	
        
	if (lastNo == 0)
		printf("and is 0\n");
	else if (lastNo > 5)
                printf("and is greater than 5\n");
	else
                printf("and is less than 6 and not 0\n");
        
        return (0);
}
