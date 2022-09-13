/**
 * _putchar - write the character c to stdout
 * @c: The character to print
 *
 * Return: 1 on success
 * On error: -1 and errno is ser approprietly.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
