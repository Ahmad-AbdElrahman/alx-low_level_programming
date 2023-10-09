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
	int l;

	for (i = 0 ; i < 10 ; i++)
	{
		for (k = i + 1 ; k < 10 ; k++)
		{
			for (l = k + 1 ; l < 10 ; l++)
			{
			putchar('0' + i);
			putchar('0' + k);
			putchar('0' + l);
			if (k == 8 && i == 7 && l == 9)
				break;
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
