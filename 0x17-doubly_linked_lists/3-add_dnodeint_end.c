#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - check the code
 * @head: pointer to struct
 * @n: data to node
 *
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return NULL;
	
	new->n = n;
	current = *head;

	if (current == NULL) {
		new->next = NULL;
		new->prev = NULL;
		*head = new;
	} else {
		while(current->next != NULL) {
			current = current->next;
		}
		new->next = NULL;
		current->next = new;
		new->prev = current;
	}
	return new;
}
