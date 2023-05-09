#include "main.h"
/**
 * append_text_to_file - creates a file.
 * @filename: is the name of the file to be created
 * @text_content: is a NULL terminated string to be writen to the file
 * Return: 1 on success, -1 on failure.
 **/
int append_text_to_file(const char *filename, char *text_content)
{
	int file, size = 0, wr;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[size])
			size++;
	}
	file = open(filename, O_WRONLY | O_APPEND);
	wr = write(file, text_content, size);

	if (file == -1 || wr == -1)
		return (-1);
	close(file);

	return (1);
}
