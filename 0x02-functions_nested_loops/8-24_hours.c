#include "main.h"
#include <stdio.h>
#include "6-abs.c"

/**
 * jack_bauer - print every minute of the day
 * Return: Nothing
 * author - Sila mulingi [https://www.github.com/IamSila]
 */

void jack_bauer(void)
{
	int hour;
	int minute;

	for (hour = 0; hour <= 23; hour++)
	{
		for (minute = 0; minute <= 59; minute++)
		{
			_putchar(hour / 10 + '0');
			_putchar(hour % 10 + '0');
			_putchar(':');
			_putchar(minute / 10 + '0');
			_putchar(minute % 10 + '0');
			_putchar('\n');
		}
	}
}

