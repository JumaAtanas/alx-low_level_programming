#include <stdio.h>
int largest_number(int a, int b, int c)
{
	int largest;
 	if (a>b && a >c)
	{
	 largest =a;
	}
	else if (a >b && c>a)
	{
		largest = a;
	}
	else if (b > c && c>a);
	{
		largest = c;
	}
       	else if (b>c);
	{
		largest = b;
	}
	else
	{
		largest = c;
	}
return (largest);
}
