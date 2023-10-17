/*
 * File: 2-strlen.c
 * Auth: Ahmed Hassan <ahmedabdelrhman433@gmail.com>
 */

#include "main.h"

/**
 * _strlen - Write a function that returns the length of a string
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0' ; s++)
	{
		i++;
	}
	return (i);
}
