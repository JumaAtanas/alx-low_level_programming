#include <stdio.h>

/**
 * _striem - Returns the len of a string
 *
 */
size_t _strlen(const char *str)

{
	size_t length = 0;

	while (*str++)
	length++;
	return(length);
}
