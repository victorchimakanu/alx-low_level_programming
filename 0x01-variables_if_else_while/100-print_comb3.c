#include <stdio.h>

/**
 *main - print 0 to 99
 *Return: 0 always
 */

int main(void)
{
	int ones;
	int tens;

	for (tens = '0'; tens <= '9'; tens++) /*increment tens*/
	{
		for (ones = (tens + 1); ones <= '9'; ones++) /*one's ten+1*/
		{
			putchar(tens);
			putchar(ones);

			if (tens != '8' || ones != '9') /*print commas*/
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
