/*
 * File: 0-isupper.c
 * Auth: Ahmed Hassan <ahmedabdelrhman433@gmail.com>
 */

#include "main.h"
#include <stdio.h>

/**
 * _isupper - Write a function that checks for uppercase character.
 * Return: 0
 */

int _isupper(int c);
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
