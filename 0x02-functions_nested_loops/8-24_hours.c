#include "main.h"

/**
 * jack_bauer - Prints the minutes of a day
 *
 * Return: prints the minutes
 */
void jack_bauer(void)
{
	int st, endst, sec_st, end_sec;

	for (st = 48; st <= 50; st++)
	{
		for (endst = 48; endst <= 57; endst++)
		{
			for (sec_st = 48; sec_st <= 53; sec_st++)
			{
				for (end_sec = 48; end_sec <= 57; end_sec++)
				{
					if (st >= 50 && endst >= 52)
						break;
					_putchar(st);
					_putchar(endst);
					_putchar(58);
					_putchar(sec_st);
					_putchar(end_sec);
					_putchar('\n');
				}
			}
		}
	}
}
