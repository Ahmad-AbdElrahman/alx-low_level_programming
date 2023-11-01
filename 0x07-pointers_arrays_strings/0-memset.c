/*
 * File: 0-memset.c
 * Auth: Ahmed Hassan <ahmedabdelrhman433@gmail.com>
 */

#include "main"
/**
 * _memset - Write a function that fills memory with a constant byte
 * @s: the first number
 * @b: the second number
 * @n: number of bytes
 * Return: fills memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}
