#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output.
 * @filename: pointer to file
 * @letters: number of letters it should read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
    char *text;
    FILE *filename_pointer;
    ssize_t number_letters;
    ssize_t read_result;
    number_letters = 0;
    
    filename_pointer = fopen("filename", "r");
    text = malloc(sizeof(char) * (letters + 1));
    
    if (filename == NULL)
        {
            return 0;
        }

    if (filename_pointer == NULL)
        {
            return 0;
        }
    if (text == NULL) 
        {
            fclose(filename_pointer);
            return 0;
       }
     while ((read_result = fread(text, 1, letters, filename_pointer)) > 0)
     {   
        fwrite(0, text, read_result);
        number_letters = number_letters + read_result;
     }
    free(text);
    fclose(filename_pointer);

    return(number_letters);
}
