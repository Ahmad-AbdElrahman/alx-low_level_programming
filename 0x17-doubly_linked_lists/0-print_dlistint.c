#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current;
	int n = 0;

	current = h;
	while(current->next != NULL)
	{
		printf("%i", current->n);
		n++;
	}
	printf("%i elements", n);
	return n;
}
