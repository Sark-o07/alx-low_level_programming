#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#define SIZE 1024
/**
 * tray - creates a tray 1024 bytes in size
 * Return: the created tray
**/
char *tray()
{
	char *tray;

	tray = malloc(sizeof(char) * SIZE);

	return (tray);
}

/**
 * _close - closes a file file that has been processed
 * @fp: file discriptor variable
 * Return: void
 **/
void _close(int fp)
{
	int val;

	val = close(fp);

	if (val == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fp);
		exit(100);
	}
}

/**
 * main - copies the content of a file to another file.
 * @argc: counts the number of arguments passed
 * @argv: an array of arguments
 * Return: 0 on success.
 * Description: If arg count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 **/
int main(int argc, char *argv[])
{
	char *arr;
	int to, fro, r, w;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	arr = tray();
	fro = open(argv[1], O_RDONLY);
	r = read(fro, arr, SIZE);
	if (fro == -1 || r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		free(arr);
		exit(98);
	}

	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	w = write(to, arr, SIZE);
	if (to == -1 || w == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		free(arr);
		exit(99);
	}
	free(arr);
	_close(fro);
	_close(to);

	return (0);
}
