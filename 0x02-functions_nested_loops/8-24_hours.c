#include "main.h"
/**
 * jack_bauer - func that prints time from 00:00 to 23:59
 *
 * Return:  0
 */

void jack_bauer(void)
{
	int hr = 0;
	int min = 0;
	int hr_rem = 0;
	int min_rem = 0;

	while (hr < 24)
	{
		while (min < 60)
		{
			hr_rem = hr % 10;
			_putchar(hr / 10 + '0');
			_putchar(hr_rem + '0');
			_putchar(':');
			_putchar(min / 10 + '0');
			_putchar(min_rem + '0');
			min++;
			_putchar('\n');
		}
		hr++;
		min = 0;
	}
}
