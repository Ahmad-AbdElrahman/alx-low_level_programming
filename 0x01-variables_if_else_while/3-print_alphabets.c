/*
 * File: 3-print_alphabets.c
 * Auth: Ahmed Hassan <ahmedabdelrhman433@gmail.com>
 */

#include <stdio.h>

/**
 * main - Prints "Programming is like building a multilingual
 * Return: 0
 */

int main(void)
{
	char ch;
	char CH;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (CH = 'A'; CH <= 'Z';CH++)
	{
		putchar(CH);
	}

	putchar('\n');
	return (0);
}
