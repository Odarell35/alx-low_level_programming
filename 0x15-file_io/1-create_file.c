#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of the file to be created
 * @text_context: string to be written on the file
 * Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content) 
{
    int file_d;
    int length;
    int bytes_written;

    if (filename == NULL) 
    {
        return -1;
    }

    file_d = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
    if (file_d == -1) 
    {
        return -1;
    }

    if (text_content != NULL) 
    {
        int length = 0;
        while (text_content[length] != '\0') 
        {
            length++;
        }

        bytes_written = write(file_d, text_content, length);
        if (bytes_written != length) {
            close(file_d);
            return -1;
        }
    }

    close(file_d);
    return 1;
}
