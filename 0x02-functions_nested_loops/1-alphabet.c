/*
 * File: 1-alphabet.c
 * Auth: Ahmed Hassan <ahmedabdelrhman433@gmail.com>
 */

#include "main.h"

/**
 * print_alphabet - Prints function that prints the alphabet
 * Return: 0
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a' ; i < 'z' ; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
