/*
 * File: 8-print_base16.c
 * Auth: Ahmed Hassan <ahmedabdelrhman433@gmail.com>
 */

#include <stdio.h>

/**
 * main - program that prints all the numbers of base 16 in lowercase
 * Return: 0
 */

int main(void)
{
	int i;
	char ch;

	for (i = 0 ; i < 10 ; i++)
	{
		putchar('0' + i);
	}

	for (ch = 'a' ; ch <= 'f' ; ch++)
	{
		putchar(ch);
	}

	putchar('\n');
	return (0);
}
