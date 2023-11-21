#include <stdio.h>
#include "lists.h"

/**
  * listint_len - length of list
  * @h: The head of the linked list
  *
  * Return: length of list
  */
 size_t listint_len(const listint_t *h)
 {
    int count = 0;
    listint_t *new_node;

    new_node = malloc(sizeof(listint_t));
    new_node = h;
    while(new_node)
    {
        new_node = new_node->next;
        count++;
    }

    return (count);
 }