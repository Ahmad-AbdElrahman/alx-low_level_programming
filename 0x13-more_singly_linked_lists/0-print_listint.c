#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints the list
 * @h: header
 *
 * Return: nothing
 * 
 */

size_t print_listint(const listint_t *h)
{
    struct listint_s *new_node;
    int count = 0;

    new_node = malloc(sizeof(listint_t));
    *new_node = *h;
    while(new_node != NULL)
    {
        printf("%d\n", new_node->n);
        new_node = new_node->next;
        count++;
    }
    return (count);
}