/*
 * File: 4-print_most_numbers.c
 * Auth: Ahmed Hassan <ahmedabdelrhman433@gmail.com>
 */

#include "main.h"

/**
 * print_most_numbers - Write a function that prints the numbers, from 0 to 9
 * Return: numbers from 0 to 9 except 2 and 4
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		else
		{
			_putchar(i + '0');
		}
	}
		_putchar('\n');
}
