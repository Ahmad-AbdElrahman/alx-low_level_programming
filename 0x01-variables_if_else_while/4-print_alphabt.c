/*
 * File: 4-print_alphabet.c
 * Auth: Ahmed Hassan <ahmedabdelrhman433@gmail.com>
 */

#include <stdio.h>

/**
 * main - Prints The alphabet in lower case
 * Return: 0
 */

int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		if (ch != 'e' && ch != 'q')
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
