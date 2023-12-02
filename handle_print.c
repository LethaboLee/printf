#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int number1 = 42;

	printf("Using %%d specifier: %d\n", number1);
	int number2 = 0x2A;

	printf("Using %%i specifier: %i\n", number2);

	return (0);
}
