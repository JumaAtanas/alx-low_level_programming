#include <stdio.h>
/**
 * print_alphabet - Print alphabet in lowercase using only `_putchar`
 * Return: 0
 */
int main()
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
