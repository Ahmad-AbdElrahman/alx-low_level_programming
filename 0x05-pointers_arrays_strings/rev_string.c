#include "main.h"

void rev_string(char *s)
{
    int i, c;
    char ch;

    while(*s != '\0')
    {
        s++;
        i++;
    }
    for (c = 0; c < i/2; c++)
    {
        ch = s[c];
        s[c] = s[i];
        s[i] = ch;
    }
}

