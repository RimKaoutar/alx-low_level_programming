#include "main.h"
/**
 * read_textfile - that reads a text file and prints
 * it to the POSIX standard output.
 * @filename: the input file.
 * @letters: nput the number.
 * Return: number of letters it could read and print,
 * or 0 if fails.
 */
size_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	size_t n, num;
	char *data;

	if (!filename)
		return(0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	data = malloc(letters);
	if (!data)
		return(0);

	n = read(fd, data, letters);
	num = write(STDOUT_FILENO, data, n);

	close(fd);
	free(data);
	if (num == -1)
		return (0);

	return (num);

}
