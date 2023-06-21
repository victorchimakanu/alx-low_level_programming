#include "main.h"

/**
 * print_alphabet - prints the alphabets inn lower case
 */
void print_alphabet(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
		_putchar(alphabets);

	_putchar('\n');
}
