#include "main.h"

char *_strncpy(char *dest, char *src, int n)
{
    int i = 0;

    for(; i < n; i++)
    {
        dest[i] = src[i];
    }
    dest[n+1] = '\0';
    return(dest);
}