#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - program that prints lower case alphabets followed by a new line.
*
*Author: Kosisochukwu Prudence Okey-Nwankwo
*
*Return : Always Success
*
**/

int main(void)
/*main contains all codes*/
{

char low;
char upp;

for (low  = 'a'; low = 'z'; low++)
{
putchar(low);
}
for (upp = 'A'; upp <= 'Z'; upp++)
{
putchar(upp);
}
return (0);
}
