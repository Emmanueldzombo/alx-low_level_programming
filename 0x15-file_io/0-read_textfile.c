#include "main.h"
#include <stdlib.h>
/**
 * read_textfile- Refers to the read text file command that prints to STDOUT.
 * @filename:Refers to the text file being currently read
 * @letters: Refers to the number of files being read
 * Return: w; to refer to the true count of the bytes being read/printed
 *         0; when the function fails/filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
        char *buf;
        ssize_t fd;
        ssize_t w;
        ssize_t t;

        fd = open(filename, O_RDONLY);
        if (fd == -1)
                return (0);
        buf = malloc(sizeof(char) * letters);
        t = read(fd, buf, letters);
        w = write(STDOUT_FILENO, buf, t);
        free(buf);
        close(fd);
        return (w);
}
