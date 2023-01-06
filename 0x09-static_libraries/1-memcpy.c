#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: memory area
 * @src: meo=mory area
 * @n: amount of bytes
 * Return: pointer to copy location
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;

	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (p);
}
