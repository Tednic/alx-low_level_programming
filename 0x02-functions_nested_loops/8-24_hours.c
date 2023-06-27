#include "main.h"

/**
  * jack_bauer - prints every minute of the day
  * from 00:00 to 23:59
  */

void jack_bauer(void)
{
	int hr, min;

	/**
	  * 24hrs in a day from 00 to 23hrs
	  * and 60mins per hour from 00 to 59mins
	  * adopting the for loop
	  */

	for (hr = 0; hr < 24; hr++)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar((hr / 10) + '0');
			_putchar((hr % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min  % 10) + '0');
			_putchar('\n');
		}
	}
}
