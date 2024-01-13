#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - sum of list
 * @head: pointer to struct
 *
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum = 0;
	current = head;

	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return sum;
}
