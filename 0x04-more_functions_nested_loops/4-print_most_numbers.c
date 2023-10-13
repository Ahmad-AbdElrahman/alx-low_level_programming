/*
 * File: 4-print_most_numbers.c
 * Auth: Ahmed Hassan <ahmedabdelrhman433@gmail.com>
 */

#include "main.h"

/**
 * print_most_numbers - Write a function that prints the numbers, from 0 to 9
 * @a: the first number
 * @b: the second number
 * Return: The result of multiplication between a and b
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		if (i != 2 || i != 4)
		{
			_putchar(i + '0');
		}
		_putchar('\n');
	}
}
