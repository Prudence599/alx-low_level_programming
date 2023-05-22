#include "main.h"
#include <stdio.h>

/**
 * main - program that prints number of arguments passed to it.
 * @argc : argument count
 * @argv : an argument value
 *
 * Return : Always 0 (success)
 *
 */

int main(int argc, char *argv[])
{
	if (argv[0])
		printf("%d\n", argc - 1);

	return (0);
}

