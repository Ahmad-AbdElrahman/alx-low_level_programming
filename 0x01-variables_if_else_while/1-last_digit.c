/*
 * File: 1-last_digit.c
 * Auth: Ahmed Hassan <ahmedabdelrhman433@gmail.com>
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print the last digit
 * Return: 0
 */

int main(void)
{
	int n, y;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	y = n % 10;
	printf("Last digit of %d is %d ", n, y);
	if (y > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (y == 0)
	{
		printf("and is 0\n");
	}
	else
	{
		printf("and is less than 6 and not 0\n");
	}
	return (0);
}
