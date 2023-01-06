#include "main.h"

/**
 * *_strcat - concatenates two strings
 *
 * @dest: string
 * @src: string
 * Return: A pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	char *placeholder = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';
	return (placeholder);
}
