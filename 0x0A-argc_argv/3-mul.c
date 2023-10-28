#include <stdio.h>
#include <stdlib.h>

/**
  * main - Print mul of two numbers
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: |ero for success
  */
int main(int argc, char *argv[])
{
	int i, k;

	if(argc >= 4)
	{
		printf("Error\n");
		return(1);
	}
	else
	{
		i = atoi(argv[1]);
		k = atoi(argv[2]);
		printf("%d\n", i * k);
	}

	return (0);
}
