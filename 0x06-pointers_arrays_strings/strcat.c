#include "main.h"

char *_strcat(char *dest, char *src)
{
    int i, k, c;
    char *a, *b;

    a = src;
    b = dest;
    for(i = 0; *a != '\0'; a++)
    {
        i++;
    }
    for(k = 0; *b != '\0'; b++)
    {
        k++;
    }
    for(c = (i); c < (i+k+1); c++)
    {
        src[c] = *dest;
        dest++;
    }
    return(dest);
}