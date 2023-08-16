#include "main.h"
#include <stdio.h>

/**
 * main - the main function
 *
 * Return: always return 0
 */

int main(void)
{
	char character;

	printf("Enter a character: ");
	scanf("%c", &character);
	if (_islower(character))
	{
		printf("The character is lowercase.\n");
	}
	else
	{
		printf("The character is not lowercase.\n");
	}
	return (0);
}
