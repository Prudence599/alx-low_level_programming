#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments program receives
 *
 * @argc : argument count
 * @argv : argument values
 *
 * Return : Always 0 (success)
 *
 */

int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
