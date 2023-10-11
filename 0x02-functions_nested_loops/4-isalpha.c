/*
 * File: 4-isalpha.c
 * Auth: Ahmed Hassan <ahmedabdelrhman433@gmail.com>
 */

#include "main.h"

/**
 * int _isalpha(int c) - Write a function that checks for alphabetic character. 
 * Return: 0
 */

int _isalpha(int c)
{
	int c;
	
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
