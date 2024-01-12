#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - Prints all the elements of a double linked list
 * @h: The double linked list to prints
 *
 * Return: The number of nodes of the double linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int length = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		++length;
		h = h->next;
	}

	return (length);
}
