#include "main.h"
/**
 * _memcpy - function to copy memory
 * @dest: destination
 * @src: source
 * @n: bytes
 * Return: memory copied
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j = 0;
	int i = n;

	for (; j < i; j++)
	{
		dest[j] = src[j];
		n--;
	}
	return (dest);
}
