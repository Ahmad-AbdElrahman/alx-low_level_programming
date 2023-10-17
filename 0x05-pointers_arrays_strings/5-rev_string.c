/*
 * File: 5-rev_string.c
 * Auth: Ahmed Hassan <ahmedabdelrhman433@gmail.com>
 */

#include "main.h"

/**
 * rev_string - Write a function that prints a string, in reverse
 * @s: string
 * Return: A string
 */
void rev_string(char *s)
{
	int i, c, k;
	char *a, w;

	a = s;

	while (s[c] != '\0')
	{
		c++;
	}

	for (k = 1; k < c; k++)
	{
		a++;
	}

	for (i = 0; i < (c / 2); i++)
	{
		w = s[i];
		s[i] = *a;
		*a = w;
		a--;
	}
}
