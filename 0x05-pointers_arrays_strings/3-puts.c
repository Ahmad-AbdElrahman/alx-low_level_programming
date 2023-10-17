/*
 * File: 3-puts.c
 * Auth: Ahmed Hassan <ahmedabdelrhman433@gmail.com>
 */

#include "main.h"

/**
 * _puts - Write a function that prints a string, followed by a new line
 * @str: string
 * Return: A string
 */
void _puts(char *str)
{
	int i;

	for (i = 0; *str != '\0'; str++)
	{
		_putchar(*str);
		i++
	}
	_putchar('\n');
}
