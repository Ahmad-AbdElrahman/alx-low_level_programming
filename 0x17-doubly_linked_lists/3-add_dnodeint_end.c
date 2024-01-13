#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - add node at end
 * @head: pointer to struct
 * @n: data to node
 *
 * Return: new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current = NULL;
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return NULL;
	
	new->n = n;
	current = *head;

	if (!current) {
		new->next = NULL;
		new->prev = NULL;
		*head = new;
	} else {
		while (current->next != NULL) {
			current = current->next;
		}
		new->next = NULL;
		current->next = new;
		new->prev = current;
	}
	return new;
}
