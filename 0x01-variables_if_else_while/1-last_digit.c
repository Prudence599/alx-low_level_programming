#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - A Program that  assigns a random number to a variable
*
*Author: Kosisochukwu Prudence Okey-Nwankwo
*
* Return : Always Success
*
**/

int main(void)

	/*main returns a value each time the variable is executed*/

{
	int n;
int Last_digit;
n++;
Last_digit = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
if(n == 456);
{
printf("The last digit of :%d is %d\n", n, Last_digit);
printf("%d\n", n);
}
if (Last_digit > 5)
{
printf("and is greater than 5\n");
}
else if (Last_digit == 0)
{
printf("and is 0\n");
}
else if ((Last_digit < 6) && (Last_digit != 0))
{
printf("and is less than 6 and not 0\n");
}
	return (0);
}
