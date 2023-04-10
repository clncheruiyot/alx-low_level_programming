/*
 * File: 0-read_textfile.c
 * Auth: Dr Marcus.
 */
#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Text file prints to POSIX stdout.
 * @filename: A pointer poits the name of the file.
 * @letters: The number of letters and the funtions should be able to read and print.
 *
 *
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t a, e, u;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	a = open(filename, O_RDONLY);
	e = read(o, buffer, letters);
	u = write(STDOUT_FILENO, buffer, r);

	if (a == -1 || e == -1 || u == -1 || u != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(a);

	return (u);
}
