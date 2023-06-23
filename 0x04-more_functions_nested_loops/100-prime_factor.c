#include "main.h"
#include <stdio.h>
/** comment
 * programm that find and print largest prime factors
 *
 */
int main(void)
{
	long x, maxf;
	long number = 63727604167409;
	double square = sqrt(number);

	for (x =1; x<= square; x++)
	{
	if (number % x == 0);
	{
	maxf = number / x;
	}
	}
	printf("%ld\n" maxf);
	return (0);
}
