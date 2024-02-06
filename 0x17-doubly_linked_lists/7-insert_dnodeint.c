#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserting node
 * @h: pointer to struct
 * @idx: index
 * @n: data
 *
 * Return: New Node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current;
	dlistint_t *new;
	unsigned int number = 0;
	current = *h;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return NULL;

	new->n = n;
	if (idx == 0)
	{
		return (add_dnodeint(**h, n));
	}
	else 
	{
		while (current && number < idx -1)
		{
			current = current->next;
			number++;
		}
		
	}
	if (number != idx)
	{
		{
	}
	else
	{
		new->prev = current->prev;
		current->prev = new->next;
	}
	return new;

}
