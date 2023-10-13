/*
 * File: 0-isupper.c
 * Auth: Ahmed Hassan <ahmedabdelrhman433@gmail.com>
 */

#include "main.h"
#include <stdio.h>

/**
 * _isupper - Write a function that checks for uppercase character.
 * @c: The number to be checked
 * Return: 1 for upper letter or 0 for any else
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
