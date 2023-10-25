/*
 * File: 0-puts_recursion.c
 * Auth: Ahmed Hassan <ahmedabdelrhman433@gmail.com>
 */

#include "main.h"

/**
 * _puts_recursion - Prints a string
 * @s: a string
 * Return: a string
 */
void _puts_recursion(char *s)
{
	if (*s =! '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	_putchar('\n');
	return;
}
