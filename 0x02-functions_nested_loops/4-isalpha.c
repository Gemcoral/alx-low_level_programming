#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character
 * @c: the parameter to be printed
 * Return: If c is a letter, uppercase or lowercase return 1 otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
