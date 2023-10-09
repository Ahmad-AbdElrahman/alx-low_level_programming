/*
 * File: 100-print_comb3.c
 * Auth: Ahmed Hassan <ahmedabdelrhman433@gmail.com>
 */

#include <stdio.h>

/**
 * main - program that prints all possible different 
 * combinations of two digits
 * Return: 0
 */

int main(void)
{
	int i;
	int k;

	for (i = 0 ; i < 10 ; i++)
	{
		for (k = i+1 ; k < 10 ; k++)
		{	
		putchar('0' + i);
		putchar('0' + k);
		if (k == 9 && i == 8)
			break;
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
