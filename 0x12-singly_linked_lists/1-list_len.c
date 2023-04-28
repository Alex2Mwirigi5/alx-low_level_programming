#include <stdlib.h>
#include "lists.h"
/**
 * list_len - elements in a linked list
 * @h: pointer
 * Return: elements in h
 */
size_t list_len(const list_t *h)
{
	size_t t = 0;

	while (h)
	{
		t++;
		h = h->next;
	}
	return (t);
}
