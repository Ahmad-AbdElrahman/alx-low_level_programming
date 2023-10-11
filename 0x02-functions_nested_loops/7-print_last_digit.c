/*
 * File: 7-print_last_digit.c
 * Auth: Ahmed Hassan <ahmedabdelrhman433@gmail.com>
 */

#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number.
 * @n: The number to be computed.
 * Return: 0
 */

int print_last_digit(int n)
{
	int lastd;

	lastd = n % 10;

	if (lastd < 0)
	{
		lastd = lastd * -1;
	}

	_putchar(last + '0');

	return (last);
}
