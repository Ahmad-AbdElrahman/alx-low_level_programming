/*
 * File: 3-print_numbers.c
 * Auth: Ahmed Hassan <ahmedabdelrhman433@gmail.com>
 */

#include "main.h"

/**
 * print_numbers - Write a function that prints the numbers, from 0 to 9
 * , followed by a new line
 * Return: 
 */

void print_numbers(void)
{
	int i;
	
	for (i = 0 ; i < 10 ; ++1)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
