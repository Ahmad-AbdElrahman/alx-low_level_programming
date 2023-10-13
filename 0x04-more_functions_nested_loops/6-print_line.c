/*
 * File: 6-print_line.c
 * Auth: Ahmed Hassan <ahmedabdelrhman433@gmail.com>
 */

#include "main.h"

/**
 * print_line - Write a function that draws a straight line in the terminal
 * Return: Draw straight line
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('-');
		}
	}
		_putchar('\n');
}
