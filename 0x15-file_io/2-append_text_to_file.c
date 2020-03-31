#include "holberton.h"
#include <stdlib.h>
/**
 * append_text_to_file - appends text at the end of a file.
 * @text_content: text.
 * @filename: name of the file.
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, i = 0, b;

	if (!filename)
	{
		return (-1);
	}
	if (text_content)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			;
	}
	file = open(filename, O_WRONLY | O_APPEND);
	if (file < 0)
	{
		return (-1);
	}
	if (text_content)
	{
		write(file, text_content, i);
		if (b < 0)
		{
			return (-1);
		}
	}
	close(file);
	return (1);
}
