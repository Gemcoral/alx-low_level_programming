#include "main.h"

/**
 * _isupper - function that checks for uppercase character
 * @c: char to be checked
 * Return: if c is uppercase, returns 1 otherwise 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
