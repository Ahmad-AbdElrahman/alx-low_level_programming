/*
 * File: 6-print_numberz.c
 * Auth: Ahmed Hassan <ahmedabdelrhman433@gmail.com>
 */

#include <stdio.h>

/**
 * main - Write a program that prints all single digit numbers of
 * base 10 starting from 0
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		putchar('0' + i);
	}
	putchar('\n');
	return (0);
}
