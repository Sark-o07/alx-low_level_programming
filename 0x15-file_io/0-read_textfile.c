#include "main.h"
/**
 * read_textfile - reads a text file and prints it to STD_OUT.
 * @filename: file to be read
 * @letters: he number of letters it should read and print
 * Return: returns the actual number of letters it could read and print
 ***/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file;
	ssize_t c;
	ssize_t d;
	char *buffer;

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	c = read(file, buffer, letters);
	d = write(STDOUT_FILENO, buffer, c);

	free(buffer);
	close(file);
	return (d);
}
