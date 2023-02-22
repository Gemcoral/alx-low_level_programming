#include "main.h"

/**
 * jack_bauer - prints every minute of the day starting from 00:00 to 23:59
 *
 * Return - Always 0
 */

void jack_bauer(void)
{
	int i;
	int r;
	
	for (i = 0; i < 24; i++)
	{
		for (r = 0; r < 60; r++)
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			_putchar(':');
			_putchar(r / 10 + '0');
			_putchar(r % 10 + '0');
			_putchar('\n');
		}
	}
}
