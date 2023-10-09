/*
 * File: 101-print_comb4.c
 * Auth: Ahmed Hassan <ahmedabdelrhman433@gmail.com>
 */

#include <stdio.h>

/**
 * main - program that prints all possible different
 * combinations of three digits
 * Return: 0
 */

int main(void)
{
	int i;
	int k;

	for (i = 0 ; i < 99 ; i++)
	{
		for (k = i + 1 ; k <= 99 ; k++)
		{

		putchar((i / 10) + '0');
		putchar((i % 10) + '0');
		putchar(' ');
		putchar((k / 10) + '0');
		putchar((k % 10) + '0');
		if (k == 99 && i == 98)
		break;
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
