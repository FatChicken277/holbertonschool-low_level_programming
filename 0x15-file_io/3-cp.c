#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
void copy_file(const char*, const char*);
/**
 * main - copy a file.
 * @ac: argc.
 * @av: argv.
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	copy_file(av[1], av[2]);
	return (0);
}

/**
 * copy_file - copy a file.
 * @file_from: file from.
 * @file_to: file to.
 */
void copy_file(const char *file_from, const char *file_to)
{
	int fileto, filefrom, a;
	char *bf[1024];

	filefrom = open(file_from, O_RDONLY);
	if (filefrom < 0)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fileto = open(file_to, O_RDWR | O_CREAT | O_TRUNC, 0664);
	if (fileto < 0)
	{
		dprintf(2, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	a = read(filefrom, bf, 1024);
	write(fileto, bf, a);
	if (close(fileto) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fileto);
		exit(100);
	}
	if (close(filefrom) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", filefrom);
		exit(100);
	}
	close(fileto);
	close(filefrom);
}
