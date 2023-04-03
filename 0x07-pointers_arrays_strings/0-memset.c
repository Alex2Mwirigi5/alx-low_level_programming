#include "main.h"
/**
 * _memset - fill block of a memory with a value
 * @s: address of a memory
 * @b: value
 * @n: byts to be chnged
 * Return: changed valuie
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
