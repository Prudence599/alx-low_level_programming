#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - Prints a random number
*
* decription : states whether it is positive, negative, or zero.
*
*Author: Kosisochukwu Prudence Okey-Nwankwo
*
*Return : Always 0
*
*/

int main(void)

{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)

	{
		printf("%d is positive\n", n);
	}

	else if (n <  0)

	{
		printf("%d is negative\n", n);
	}

	else

	{
		printf("%d is zero\n", n);
	}

return (0);
}
