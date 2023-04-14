#include "main.h"
/**
 * Create_file: Refers to a function that creates a file.
 * @filename: Refers to the pointer to the name of the file to be created.
 * @text_content: Refers to the pointer to a string that will write the file
 * Return: If the function fails - -1 (Not success), Otherwise - 1.(success)
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
		len++;
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, len);
	if (fd == -1 || w == -1)
		return (-1);
	close(fd);
	return (1);
}
