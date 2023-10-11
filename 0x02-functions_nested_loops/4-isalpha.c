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
	char c;
	
	if (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
