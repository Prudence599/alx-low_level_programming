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

for (low  = 'a'; low <= 'z'; low++)

{
putchar(low);
putchar('\n');
}

return (0);
}
