#include <stdio.h> 

/**
 * main - prints the lowercase alphabet in reverse
 * return: 0 always 
 */

int main(void) 
{
	char alpha = 'z';

	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');

	return (0);
}
