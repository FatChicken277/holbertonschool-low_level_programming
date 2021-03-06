#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
void copy_file(const char*, const char*);
void cerrar(int fileto, int filefrom);
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
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (!av[1])
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if (!av[2])
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
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
	int fileto, filefrom, a, b;
	char *bf[1024];

	filefrom = open(file_from, O_RDONLY);
	if (filefrom == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fileto = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fileto == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	for (a = 1024; a == 1024;)
	{
		a = read(filefrom, bf, 1024);
		if (a == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			exit(98);
		}
		b = write(fileto, bf, a);
		if (b == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	cerrar(fileto, filefrom);
}

/**
 * cerrar - close all open files.
 * @filefrom: file from.
 * @fileto: file to.
 */
void cerrar(int fileto, int filefrom)
{
	int a, b;

	a = close(fileto);
	if (a == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileto);
		exit(100);
	}
	b = close(filefrom);
	if (b == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", filefrom);
		exit(100);
	}
}
