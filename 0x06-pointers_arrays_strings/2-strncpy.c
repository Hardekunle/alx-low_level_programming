#include"main.h"

/**
 * _strncpy - copy string function
 * @src: pointer to first string
 * @dest: pointer of second string
 * @n: integer
 * Return: string copy
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (i < n)
	{
		while (i < n)
		{
			dest[i] = '\0';
			i++;
		}


	}
	return (dest);
}
