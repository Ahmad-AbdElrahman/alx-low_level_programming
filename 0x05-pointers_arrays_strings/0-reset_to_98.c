/*
 * File: 0-reset_to_98.c
 * Auth: Ahmed Hassan <ahmedabdelrhman433@gmail.com>
 */

#include "main.h"

/**
 * reset_to_98 - Write a function that takes a pointer to an int as parameter 
 * and updates the value it points to to 98
 * @n: the second number
 * Return: value of 98
 */
void reset_to_98(int *n)
{
	int *p;
	
	*p = &n;
	*p = 98;
}
