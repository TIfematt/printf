#include <unistd.h>

/**
 * _putchar - Print a character to stdout
 * @c: Character to print
 * Return: -1 on error, 1 on success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
