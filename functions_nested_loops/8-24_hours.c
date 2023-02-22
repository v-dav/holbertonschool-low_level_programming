#include "main.h"

/**
 * jack_bauer - a function that prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
 *
 * Return: nothing
 */
void jack_bauer(void)
{
	int a, b, d, e;

	a = 48;
	while (a >= 48 && a <= 50)
	{
		b = 48;
		while (b >= 48 && b <= 51)
		{
			d = 48;
			while (d >= 48 && d <= 53)
			{
				e = 48;
				while (e >= 48 && e <= 57)
				{
					_putchar(a);
					_putchar(b);
					_putchar(58);
					_putchar(d);
					_putchar(e);
					_putchar('\n');
					e++;
				}
				d++;
			}
			b++;
		}
		a++;
	}

}
