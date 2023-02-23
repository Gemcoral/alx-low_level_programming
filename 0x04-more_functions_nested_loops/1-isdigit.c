#include "main.h"

/**
 * _isdigit - function that checks for a digit (0 through 9)
 * @c: char to be checked
 * Return: if c is a digit return 1 otherwise 0
 */

int _isdigit(int c)
{
	if (c <= '0' && c >= '9')
		return (1);
	else
		return (0);
}
