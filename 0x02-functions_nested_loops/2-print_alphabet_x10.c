#include "main.h"

/*
 * print_alphabet_x10 - prints alphabet 10 times in lower case
 *
 * Retun: Always 0
 */

void print_alphabet_x10(void);
{
	int i = 0;
	char letter;

	while (i++ <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}

