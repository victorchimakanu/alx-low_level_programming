#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 * @a: first interger to swap
 * @b: secnd integer to swap
 * Returns: void
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap  = *a;
	*a = *b;
	*b = swap;
}
