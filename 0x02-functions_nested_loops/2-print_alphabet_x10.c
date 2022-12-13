#include <stdio.h>

/**
 * main -  prints 10 times the alphabet, in lowercase, followed by a new line.
 *
 * Return: Nothing.
 */
int main(void)
{
	int i;
	char c;

	for (i = 0; i < 10; ++i)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			putchar(c);
		}
		putchar('\n');
		return (0);
	}
}
