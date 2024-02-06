#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

size_t list_len(const list_t *h)
{
    int count = 0;
    if(h == NULL)
    {
        printf("linked list is empty");
    }
    while(h != NULL)
    {
        count++;
        h = h->next;
    }
    return (count);
}