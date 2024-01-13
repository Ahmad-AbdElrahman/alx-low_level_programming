#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - free d list
 * @head: head of struct
 *
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	current = head;
	if (!head)
	{
		while (head->next != NULL)
		{
			current = head;
			free(current);
			head = head->next;
		}

		free(head);
	}
}
