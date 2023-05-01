#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - program that prints single followed by a new line.
*
*Author: Kosisochukwu Prudence Okey-Nwankwo
*
*Return : Always Success
*
**/

int main(void)
{
	int i;
	
	for (i = '0'; i <= '9'; i++)
	{
		printf("%d", i);
		printf("\n");
	}
	return (0);
}
