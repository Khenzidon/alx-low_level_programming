#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: name of the file to be read
 * @letters: number of letters to read and print
 *
 * Return: the number of letters printed, or 0 if it failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	int p, q;
	char *buf;

	if (!filename)
		return (0);

	f = open(filename, O_RDONLY);
	if (f < 0)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);

	p= read(f, buf, letters);
	if (p < 0)
	{
		free(buf);
		return (0);
	}
	buf[p] = '\0';

	close(f);

	q = write(STDOUT_FILENO, buf, p);
	if (q < 0)
	
		free(buf);
		return (0);
	}

	free(buf);
	return (q);
}
