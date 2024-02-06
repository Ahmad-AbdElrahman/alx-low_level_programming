#include "main.h"
#include <stdio.h>

char *_strcpy(char *dest, char *src)
{
    int i = 0, k;
    char *a;

    a = src;
    while(*a != '\0')
    {
        i++;
        a++;
    }
    for(k = 0; k < i; k++)
    {
        dest[k] = src[k];
    }
    return(dest);
}
