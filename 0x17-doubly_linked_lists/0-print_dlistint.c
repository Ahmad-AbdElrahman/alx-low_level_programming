#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - print doubly linked list
 * @h: pointer to struct
 * Return: the number of nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current;
	int n = 0;

	current = h;
	while(current->next != NULL)
	{
		printf("%i\n", current->n);
		current = current->next;
		n++;
	}
	n++;
	printf("%i\n", current->n);
	return n;
}
