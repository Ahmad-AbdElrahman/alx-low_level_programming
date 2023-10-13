/*
 * File: 7-print_diagonal.c
 * Auth: Ahmed Hassan <ahmedabdelrhman433@gmail.com>
 */

#include "main.h"

/**
 * print_line - Write a function that draws a diagonal line on the terminal
 * @n: line length
 * Return: Draw diagonal line
 */
void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < x; y++)
			{
				_putchar(' ');
			}
		}

		_putchar(92);
		_putchar('\n');
	}
}
