/*
 * File: 3-print_numbers.c
 * Auth: Ahmed Hassan <ahmedabdelrhman433@gmail.com>
 */

#include "main.h"

/**
 * print_numbers - Write a function that prints the numbers
 * followed by a new line
 * Return: The numbers since 0 up to 9 
 */

void print_numbers(void)
{
	int i;
	
	for (i = 0 ; i < 10 ; i++)
	{
		_putchar(i + '0');
	}

	_putchar('\n');
}
