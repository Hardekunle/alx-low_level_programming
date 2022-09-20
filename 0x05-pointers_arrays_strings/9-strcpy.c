#include "main.h"

/**
 * _strcpy - Copies a string from src to dest.
 * @dest: A buffer to copy the string to.
 * @src: The source string to copy.
 *
 * Return: A pointer to the destination string @dest.
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index] && src[index]!='\0')
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
}
