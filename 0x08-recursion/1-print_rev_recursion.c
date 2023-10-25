/*
 * File: 1-print_rev_recursion.c
 * Auth: Ahmed Hassan <ahmedabdelrhman433@gmail.com>
 */

#include "main.h"

/**
 * _print_rev_recursion - Prints a reversed string
 * @s: a string in reverse
 * Return: a string
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar(*s);
		s--;
		_print_rev_recursion(s);
	}

	_putchar('\n');
	return;
}
