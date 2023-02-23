#include "main.h"

/**
 * print_most_numbers - function that prints number 0-9
 *
 * Return: Always 0
 */

void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		if (!(c == '2' || c == '4'))
			_putchar(c);
	}
	_putchar('\n');
}
