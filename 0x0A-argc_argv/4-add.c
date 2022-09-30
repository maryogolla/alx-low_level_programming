#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: list of argumentd
 * Return: 0 if no arguments 1 if one of the numbers
 * not digits
 */

int main(int argc, char *argv[])
{
	int i, j;
	unsigned int sum = 0;

	if (arg == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (check(argv[i]))
		{
			j = atoi(argv[i]);
			sum += j;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}

/**
 * check - checks if input string is a digit
 * @c: string to check
 * Return: 0 if isnt digit
 * 1 if is digit
 */

int check(char *c)
{
	int i = 0;
	int j;

	while (c[i] != '\0')
	{
		j = isdigit(c[i]);
		if (j == 0)
			return (0);
		i++;
	}
	return (1);
}
