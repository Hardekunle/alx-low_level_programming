#include <stdio.h>
/**
* main - prints numbers between 0 and 10 as character
* Return: 0;
*/
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
		putchar(number);

	putchar('\n');

	return (0);
}
