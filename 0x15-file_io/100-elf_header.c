#include"main.h"
#include <elf.h>
/**
 * print_elf_header_info- display information in the ELF header at the start
 * of ELF file
 *@elf_filename: filename
 * Return: void
*/

void print_elf_header_info(const char* elf_filename) 
{
FILE *file;
Elf64_Ehdr elf_header;
Elf64_Ehdr *head_ptr;
head_ptr = &elf_header;


/*Open the ELF file*/
file = fopen(elf_filename, "rb");
if (file == NULL) 
{
perror("fopen");
return;
}

/*Read the ELF header*/

if (fread(head_ptr, sizeof(elf_header), 1, file) != 1) 
{
fprintf(stderr, "Failed to read ELF header\n");
}


/*Check the ELF magic number*/
if (elf_header.e_ident[EI_MAG0] != ELFMAG0 || elf_header.e_ident[EI_MAG1] != ELFMAG1 || elf_header.e_ident[EI_MAG2] != ELFMAG2 || elf_header.e_ident[EI_MAG3] != ELFMAG3)
{
fprintf(stderr, "File is not an ELF file\n");
exit(98);
fclose(file);
}

/*Print the ELF header information*/
printf("ELF Header:");
printf("Magic: %02x %02x %02x %02x\n", elf_header.e_ident[EI_MAG0], elf_header.e_ident[EI_MAG1], elf_header.e_ident[EI_MAG2], elf_header.e_ident[EI_MAG3]);
printf("  Class:                             %s\n", elf_header.e_ident[EI_CLASS] == ELFCLASS64 ? "64-bit" : "32-bit");
printf("  Data:                              %s\n", elf_header.e_ident[EI_DATA] == ELFDATA2LSB ? "little-endian" : "big-endian");
printf("  Version:                           %d\n", elf_header.e_ident[EI_VERSION]);
printf("  OS/ABI:                            %d\n", elf_header.e_ident[EI_OSABI]);
printf("  ABI Version:                       %d\n", elf_header.e_ident[EI_ABIVERSION]);
printf("  Type:                              %d\n", elf_header.e_type);
printf("  Entry point address:               0x%lx\n", (unsigned long)elf_header.e_entry);
   
    

/* Close the ELF file*/
fclose(file);
}
/**
 * main - display information in the ELF header at the start
 * of ELF file
 * @argc: number pf arguments
 * @argv: array of arguments
 * Return: Always 0
*/
int main(int argc, char *argv[]) 
{

if (argc != 2) 
{
fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);

}
print_elf_header_info(argv[1]);
return (0);
}
