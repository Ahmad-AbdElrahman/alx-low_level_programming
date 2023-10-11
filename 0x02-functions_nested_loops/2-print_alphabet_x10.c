/*
 * File: 2-print_alphabet_x10.c
 * Auth: Ahmed Hassan <ahmedabdelrhman433@gmail.com>
 */

#include "main.h"

/**
 * print_alphabet_x10 - Prints function that prints the alphabet
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char i;
	int n = 0;

	while (n < 10)
	{
	for (i = 'a' ; i <= 'z' ; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	
	n++;
	}
}
