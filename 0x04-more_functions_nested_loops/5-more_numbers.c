/*
 * File: 5-more_numbers.c
 * Auth: Ahmed Hassan <ahmedabdelrhman433@gmail.com>
 */

#include "main.h"

/**
 * more_numbers - Write a function that prints 10 times the numbers
 * Return: 10 times the number
 */

void print_most_numbers(void)
{
	int i, k;

	for (i = 0; i <= 10; i++)
	{
		for (k = 0; k <= 14; k++)
		{
			_putchar(k + '0');
			_putchar('\n');
		}
		_putchar('\n');
}
