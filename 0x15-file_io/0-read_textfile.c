#include "main.h"
/**
 * read_textfile - reads a text file and prints
 * it to the POSIX standard output.
 * @filename: pointer to file
 * @letters: number of letters it should read and print
 * Return: number of lettere read and printed
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
char *text;
ssize_t open_file;
ssize_t number_letters;
ssize_t read_result;

number_letters = 0;
open_file = open(filename, O_RDWR);
text = malloc(sizeof(char) * (letters + 1));

if (filename == NULL)
{
return (0);
}

if (open_file < 0)
{
return (0);
}
if (text == NULL)
{
close(open_file);
return (0);
}
while ((read_result = read(open_file, text, letters) > 0))
{
write(STDOUT_FILENO, text, read_result);
number_letters = number_letters + read_result;
}
close(open_file);
free(text);
return (number_letters);
}
