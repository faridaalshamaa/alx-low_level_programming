#include <stdio.h>

/**
 * main - Program that prints the alphabet in lowercase and upper case
 *
 * Return: Always 0
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')

		putchar(letter);
	}
	putchar('\n');
	return (0);
}
