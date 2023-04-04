#include "main.h"
/**
 * print_line - draws a straighr line in a terminal
 * @n: no of times line should be drawb
 * Return: line
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
