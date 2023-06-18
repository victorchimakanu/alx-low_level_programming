#include <stdio.h>

/**
 * main - prints size of various types 
 * Return: 0
 */

int main(void)
{
	printf("size of char: %zu byte(s)\n", sizeof(char)); 
	printf("size of int : %zu byte(s)\n", sizeof(int));
	printf("size of long int: %zu byte(s)\n", sizeof(long int));
	printf("size of long long: %zu byte(s)\n", sizeof(long long));
	printf("size of float: %zu byte(s)\n", sizeof(float));

	return(0);

}
