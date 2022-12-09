#include <stdio.h>

/**
 * main - Should print the alphabet in lowercase
 * Return: Always 0
 */
int main()
{
	
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
