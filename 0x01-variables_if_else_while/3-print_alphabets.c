#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase
 * return: 0
 */

int main(void)
{
	char lower = 'a';
	char upper = 'A';

	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}

	while (upper <= 'Z') /*print uppercase A-Z*/
	{
		putchar(upper);
		upper++;
	}

	putchar('\n');

	return (0);
}
