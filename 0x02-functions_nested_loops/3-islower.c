#include "main.h"

/**
 * _islower - function that checks for lower case character
 * @c: function to be printed
 * Return: Returns 1 if char is lowercase otherwise 0
 */

int _islower(int c);
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
