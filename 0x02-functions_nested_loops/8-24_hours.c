#include "main.h"

/**
<<<<<<< HEAD
=======
<<<<<<< HEAD
 * jack_bauer - prints every minute of the day
 */
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour <= 23; hour++)
	{
		for (minute = 0; minute <= 59; minute++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');

			_putchar((minute % 10) + '0');

			_putchar('\n');
		}
	}
=======
>>>>>>> master
 * jack_bauer - prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
		int i, j;

		i = 0;

		while (i < 24)
		{
			j = 0;
			while (j < 60)
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
				_putchar(':');
				_putchar((j / 10) + '0');
				_putchar((j % 10) + '0');
				_putchar('\n');
				j++;
			}
			i++;
		}
<<<<<<< HEAD
=======
>>>>>>> 70c09eb (8. I'm federal agent Jack Bauer, and today is the longest day of my life)
>>>>>>> master
}
