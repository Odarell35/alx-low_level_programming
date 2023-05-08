#include "main.h"
/**
 * append_text_to_file - append string to file
 * @filename: file where text will be appended
 * @text_content: text to append
 * Return: 1 success, -1 failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
int file_d;
int length, nwrite;

if (filename == NULL)
{
return (-1);
}

file_d = open(filename, O_WRONLY | O_APPEND);
if (file_d == -1)
{
return (-1);
}

if (text_content != NULL)
{
length = 0;
while (text_content[length] != '\0')
{
length++;
}

nwrite = write(file_d, text_content, length);
if (nwrite == -1)
{
return (-1);
}
}

close(file_d);
return (1);
}
