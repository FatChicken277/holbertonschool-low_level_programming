#include "holberton.h"
#include <stdlib.h>
/**
 * create_file - creates a file.
 * @text_content: text.
 * @filename: name of the file.
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int file, i;

	if (!filename)
	{
		return (-1);
	}
	for (i = 0; text_content[i] != '\0'; i++)
		;
	i++;
	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file < 0)
	{
		return (-1);
	}
	if (text_content)
	{
		write(file, text_content, i);
	}
	close(file);
	return (1);
}
