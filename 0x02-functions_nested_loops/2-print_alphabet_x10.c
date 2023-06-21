#include "main.h"

/**
 * print_alphabet_x10 - print lowercase alphabet ten times
 * Return: 0
 */

void print_alphabet_x10(void)
{
        char alphabets;
        int incr;

        for (incr = 1; incr <= 10; incr++)
        {
                for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
                {
                        _putchar(alphabets);
                }
                _putchar('\n');
        }
}
