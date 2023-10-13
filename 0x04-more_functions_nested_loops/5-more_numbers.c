/*
 * File: 5-more_numbers.c
 * Auth: Ahmed Hassan <ahmedabdelrhman433@gmail.com>
 */

#include "main.h"

/**
 * more_numbers - Write a function that prints 10 times the numbers
 * Return: 10 times the number
 */
void more_numbers(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y > 9)
			{
				_putchar((y / 10) + '0');
			}

			_putchar((y % 10) + '0');
		}

		_putchar('\n');
	}
}
