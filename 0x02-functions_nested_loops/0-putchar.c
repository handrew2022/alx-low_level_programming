#include "main.h"

/**
 * main - program that prints _putchar, followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
	char c[] = "_putchar";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}
