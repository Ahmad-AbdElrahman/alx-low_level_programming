/*
 * File: 5-print_numbers.c
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
		printf("%d", i);
	}
	printf("\n");
	return (0);
}
