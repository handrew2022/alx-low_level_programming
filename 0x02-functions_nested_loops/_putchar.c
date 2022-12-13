#include "main.h"
#include <unistd.h>

/**
 * main - Writes out the character c to standout
 * @c: the character to print
 *
 * Return: on success 1
 * On error, -1 is returne and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
