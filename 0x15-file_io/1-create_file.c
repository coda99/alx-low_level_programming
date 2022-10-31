#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create
 * @text_content: A pointer to a string to write to file
 *
 * Return: If the func fails -1 else 1
 */

int create_file(const char  *filename, char *text_content)
{
	int o, w, len;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len]; )
			len++;
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0000);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);
	return (1);
}
