#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: void
 */
void times_table(void)
{
	int a, b, multiplied_value;

	for (b = 0; b < 10; b++)
	{
		for (a = 0; a < 10; a++)
		{
			multiplied_value = a * b;
			if (a == 0)
			{
				_putchar(multiplied_value + '0');
			}
			else if (multiplied_value >= 10)
			{
				_putchar(' ');
				_putchar(multiplied_value / 10 + '0');
				_putchar(multiplied_value % 10 + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(multiplied_value + '0');
			}
			if (a != 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
