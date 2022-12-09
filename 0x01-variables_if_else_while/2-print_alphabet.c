#include <stdio.h>
/**
 * main - Should print the alphabet in lowercase
 * Return: Always 0
 */
int main(void)
{
	for (char c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}

	putchar('/n');

	return (0);
}
