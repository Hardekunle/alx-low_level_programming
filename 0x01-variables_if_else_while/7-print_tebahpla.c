#include <stdio.h>
/**
* main - prints alphabet in lowercase and in reverse order
* Return: 0;
*/
int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
		putchar(alphabet);

	putchar('\n');

	return (0);
}
~
