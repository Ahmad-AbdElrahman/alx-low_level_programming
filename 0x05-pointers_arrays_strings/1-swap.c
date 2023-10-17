/*
 * File: 1-swap.c
 * Auth: Ahmed Hassan <ahmedabdelrhman433@gmail.com>
 */

#include "main.h"

/**
 * swap_int - Write a function that swaps the values of two integers.
 * @a: the first number
 * @b: the second number
 * Return: saping two integers
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
