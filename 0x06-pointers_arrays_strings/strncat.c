#include "main.h"
char *_strncat(char *dest, char *src, int n)
{
    int i = 0, c;

    while(dest[i])
    {
        i++;
    }
    for(c = i; c < (i+n+1); c++)
    {
        dest[c] = *src;
        src++;
    }
    return(dest);
}