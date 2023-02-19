#include <stdio.h>


/**
 * main - Prints the size of varios types based on the computer it is compiled and run on.
 * Return: Always 0.
 */

int main(void)

{
	printf(size of a char: %zu bytes(s)\n, sizeof(char));
	
	printf("Six of an int: %zu byte(s)", sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
	printf("Size of a float %zu bytes(s)\n", sizeof(float));
	return (0);
}
