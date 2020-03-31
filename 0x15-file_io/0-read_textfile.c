#include "holberton.h"
#include <stdlib.h>
/**
 * read_textfile - reads a text file and prints it to the standard output.
 * @letters: is the number of letters it should read and print.
 * @filename: name of the file.
 * Return: the actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, a;
	char *bf;

	if (!filename)
	{
		return (0);
	}
	bf = malloc(letters);
	if (bf == NULL)
	{
		return (0);
	}
	file = open(filename, O_RDONLY);
	if (file < 0)
	{
		free(bf);
		return (0);
	}
	a = read(file, bf, letters);
	write(STDOUT_FILENO, bf, a);
	close(file);
	return (a);
}
