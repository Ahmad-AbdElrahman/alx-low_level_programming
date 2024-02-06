#include "main.h"
#include <stdio.h>

void puts_half(char *str)
{
    int i, k;
    char *a;
    a = str;
    for(i = 0; *a != '\0'; a++)
    {
        i++;
    }
    if(i % 2 == 0)
    {
        for(k = i/2; k <= i; k++)
        {
            _putchar(str[k]);
        }
    }
    else
    {
       for(k = (i - 1) / 2; k <= i; k++)
        {
            _putchar(str[k]);
        } 
    }
    _putchar('\n');
}
