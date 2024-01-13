#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - adding node at given index
 * @head: pointer to struct
 * @index: index node
 *
 * Return: node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int number = 0;
	
	current = head;
	while (number != index)
	{
		if (current)
		{
			current = current->next;
			number++;
		}
		else
		{
			return NULL;
		}

	}
	return current;
}
