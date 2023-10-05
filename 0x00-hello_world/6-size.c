/*
 * File: 6-size.c
 * Auth: Ahmed Hassan <ahmedabdelrhman433@gmail.com>
 */

#inclue <stdio.h>

/**
 * main - Write a C program that prints the size of various types
 * Return: 0
 */

int main(void)
{
	char cartype;
	int inttype;
	long int linttype;
	long long int llinttype;
	float ftype;
	printf("Size of a char: %zu byte(s)\n", sizeof(chartype));
	printf("Size of an int: %zu byte(s)\n", sizeof(inttype));
	printf("Size of a long int: %zu byte(s)\n", sizeof(linttype));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(llinttype));
	printf("Size of a float: %zu byte(s)\n", sizeof(ftype));
	return (0)
}
