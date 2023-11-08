#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * main - Print mul of two numbers
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: zero for success
  */
int main(int argc, char *argv[])
{
        int i, k, l, m, n, sum;

        i = atoi(argv[1]);

        if (argc != 2)
        {
                printf("Error\n");
                return(1);
        }
        else if (i <= 0)
        {
                printf("%d\n", 0);
        }
        else
        {
                if (i >= 25)
                {
                        k = i / 25;
                        printf("%d\n", k);
                        l = (i - (k * 25)) / 10;
                        printf("%d\n", l);
                        m = (i - (l * 10) + (k * 25)) / 2;
                        printf("%d\n", m);
                        n = (i - (m * 2) + (l * 10 ) + (k * 25)) / 1;
                        printf("%d\n", n);
                        sum = k + l + m + n;
                        printf("%d\n", sum);
                }
                else if(i < 25 && i >= 10)
                {
                        l = i / 10;
                        m = (i - (l * 10)) / 2;
                        n = (i - (l * 10) + (m * 2)) / 1;
                        sum = l + m + n;
                        printf("%d\n", sum);
                }
                else if(i < 10 && i >= 2)
                {
                        m = i / 2;
                        n = (i - (m * 2)) / 1;
                        sum = m + n;
                        printf("%d\n", sum);
                }
                else
                {
                        n = i / 1;
                        printf("%d\n", n);
                }
        }

        return(0);
}