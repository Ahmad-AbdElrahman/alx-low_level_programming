/*
 * File: 6-abs.c
 * Auth: Ahmed Hassan <ahmedabdelrhman433@gmail.com>
 */

#include "main.h"

/**
 * _abs(int) - Write a function that checks for alphabet
 * Return: 0
 */

int _abs(int n)
{
	int r;

	if (n < 0)
	{
		r = n * -1;
		return (r);
	}
	else
	{
		return (n);
	}
}
