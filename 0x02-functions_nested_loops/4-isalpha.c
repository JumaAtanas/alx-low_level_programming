#include <main.h>
/**
 * _isalpha - Check if character is an alphabetic character.
 * @c: type int character
 * Return: 1 if letter, lowercase or uppercase, and 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <=122) || (c >=65 && c <=90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
