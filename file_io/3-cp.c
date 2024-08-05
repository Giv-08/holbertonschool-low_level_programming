#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

void err_exit(const char *str, const char *file, int code)
{
    dprintf(STDERR_FILENO, str, file);
    exit(code);
}

void close_file(int fd)
{
    if (close(fd) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d: %s\n", fd, strerror(errno));
        exit(100);
    }
}

int main(int argc, char *argv[])
{
    int file_from, file_to;
    ssize_t size;
    char buffer[1024];

    if (argc != 3)
    {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }

    file_from = open(argv[1], O_RDONLY);
    if (file_from == -1)
    {
        err_exit("Error: Can't read from file %s\n", argv[1], 98);
    }

    file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (file_to == -1)
    {
        err_exit("Error: Can't write to %s\n", argv[2], 99);
    }

    while ((size = read(file_from, buffer, sizeof(buffer))) > 0)
    {
        if (write(file_to, buffer, size) != size)
        {
            dprintf(STDERR_FILENO, "Error: Can't write to %s: %s\n", argv[2], strerror(errno));
            close(file_from);
	    close(file_to);
	    exit(99);
        }
    }

    if (size == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s: %s\n", argv[1], strerror(errno));
        close(file_from);
	close(file_to);
	exit(98);
    }

    close_file(file_from);
    close_file(file_to);

    return (0);
}
