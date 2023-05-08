#include "main.h"
#define BUFFER_SIZE 1024
/**
 * cp - copies file from one file to another
 * @file_to: copy to this file
 * @file_from: copy content from this file
 * Return: nothing
*/
void cp(char *file_to, char *file_from)
{
ssize_t file_to_fd, file_from_fd;
ssize_t nread, nwrite, close_file;
char temp[BUFFER_SIZE];

file_from_fd = open(file_from, O_RDONLY);
file_to_fd = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
nread = read(file_from_fd, temp, BUFFER_SIZE);
while (nread > 0) 
{
nwrite = write(file_to_fd, temp, nread);
if (nwrite == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
exit(99);
}
nread = read(file_from_fd, temp, BUFFER_SIZE);
}
close_file = close(file_from_fd);
if (close_file == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %ld\n", file_from_fd);
exit(100);
}
close_file = close(file_to_fd);
if (close_file == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %ld\n", file_from_fd);
exit(100);
}
}

/**
 * main - check the code 
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
ssize_t file_to_fd, file_from_fd;
ssize_t nread, nwrite, close_file;

nread = 0;
nwrite = 0;
close_file = 0;
file_to_fd = 0;
file_from_fd = 0;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
exit(97);
}
cp(argv[2], argv[1]);
if (file_from_fd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}

if (file_to_fd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
exit(99);
}

if (nwrite != nread)
{
dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
exit(99);
}

if (nread == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}

if (close_file == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %ld\n", file_from_fd);
exit(100);
}
return (0);
}
