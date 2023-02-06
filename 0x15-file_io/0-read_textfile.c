#include "main.h"

/**
 * read_textfile - reads the contents of a .txt file and prints it to stdout
 * @filename: name of the file
 * @letters: number of letters expected to read (for memory allocation)
 * Return: the number of letters printed, 0 on failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rcont, wcont;
	char *cont;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	cont = malloc(sizeof(char) * letters);

	if (cont == NULL)
		return (0);

	rcont = read(fd, cont, letters);
	if (rcont < 0)
	{
		free(cont);
		return (0);
	}
	cont[rcont] = '\0';
	close(fd);
	wcont = write(STDOUT_FILENO, cont, rcont);
	if (wcont < 0)
	{
		free(cont);
		return (0);
	}
	free(cont);
	return (wcont);
}

