#include "main.h"
#include <stdio.h>

/**
  * _strncat - Concatenates two strings
  * @dest: The destination string
  * @src: The source string
  * Return: A pointer to the resulting string dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int dlen = 0, i = 0;

	while (dest[dlen])
	{
		dlen++;
	}

	while (i < n && src[i])
	{
		dest[dlen] = src[i];
		dlen++;
		i++;
	}
	dest[dlen + n + 1] = '\0';

	return (dest);
}
