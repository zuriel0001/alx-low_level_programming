#include "main.h"
#include <stdio.h>

/**
* check_elf - a function that checks if a file is an ELF file
* @e_ident: pointer to an array holding ELF magic numbers
*
* Description: if the file is not an ELF file then exit code 98.
*/

void check_elf(unsigned char *e_ident)
{
int i;

i = 0;
while (i < 4)
{
if (e_ident[i] != 127 &&
e_ident[i] != 'E' &&
e_ident[i] != 'L' &&
e_ident[i] != 'F')
{
dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
exit(98);
}
i++;
}
}

/**
* print_magic - a function that prints magic numbers of an ELF header
*
* @e_ident: pointer to array containing the ELF magic numbers
*
* Description: all magic numbers are separated by spaces
*/

void print_magic(unsigned char *e_ident)
{
int i;

printf("  Magic:   ");

for (i = 0; i < EI_NIDENT; i++)
{
printf("%02x", e_ident[i]);

if (i == EI_NIDENT - 1)
{
printf("\n");
}
else
{
printf(" ");
}
}
}

/**
* print_class - a function that prints the class of an ELF header
* @e_ident: pointer to an array of ELF class
*/

void print_class(unsigned char *e_ident)
{
printf("  Class:                             ");

switch (e_ident[EI_CLASS])
{
case ELFCLASSNONE:
printf("none\n");
break;
case ELFCLASS32:
printf("ELF32\n");
break;
case ELFCLASS64:
printf("ELF64\n");
break;
default:
printf("<unknown: %x>\n", e_ident[EI_CLASS]);
}
}

/**
* print_data - a function that prints the data of an ELF header
*
* @e_ident: a pointer to an array of ELF class
*/

void print_data(unsigned char *e_ident)
{
printf("  Data:                              ");

switch (e_ident[EI_DATA])
{
case ELFDATANONE:
printf("none\n");
break;
case ELFDATA2LSB:
printf("2's complement, little endian\n");
break;
case ELFDATA2MSB:
printf("2's complement, big endian\n");
break;
default:
printf("<unknown: %x>\n", e_ident[EI_CLASS]);
}
}

/**
* print_version - a function that prints the version of an ELF header
* @e_ident: a pointer to an array holding the ELF version
*/

void print_version(unsigned char *e_ident)
{
printf("  Version:                           %d",
e_ident[EI_VERSION]);

switch (e_ident[EI_VERSION])
{
case EV_CURRENT:
printf(" (current)\n");
break;
default:
printf("\n");
break;
}
}



/**
* print_osabi - a duncrion that prints the OS/ABI of an ELF header
* @e_ident: pointer to an array of the ELF version
*/

void print_osabi(unsigned char *e_ident)
{
printf("  OS/ABI:                            ");

switch (e_ident[EI_OSABI])
{
case ELFOSABI_NONE:
printf("UNIX - System V\n");
break;
case ELFOSABI_HPUX:
printf("UNIX - HP-UX\n");
break;
case ELFOSABI_NETBSD:
printf("UNIX - NetBSD\n");
break;
case ELFOSABI_LINUX:
printf("UNIX - Linux\n");
break;
case ELFOSABI_SOLARIS:
printf("UNIX - Solaris\n");
break;
case ELFOSABI_IRIX:
printf("UNIX - IRIX\n");
break;
case ELFOSABI_FREEBSD:
printf("UNIX - FreeBSD\n");
break;
case ELFOSABI_TRU64:
printf("UNIX - TRU64\n");
break;
case ELFOSABI_ARM:
printf("ARM\n");
break;
case ELFOSABI_STANDALONE:
printf("Standalone App\n");
break;
default:
printf("<unknown: %x>\n", e_ident[EI_OSABI]);
}
}


/**
* print_abiversion - function to prints the ABI version of an ELF header
* @e_ident: a pointer to an array of ELF ABI version
*/

void print_abiversion(unsigned char *e_ident)
{
printf("  ABI Version:                       %d\n", e_ident[EI_ABIVERSION]);
}


/**
* print_type - dunction to prints the type of an ELF header
*
* @e_type: the type of ELF
* @e_ident: a pointer to an array of the ELF class
*/

void print_type(unsigned int e_type, unsigned char *e_ident)
{
if (e_ident[EI_DATA] == ELFDATA2MSB)
e_type >>= 8;

printf("  Type:                              ");

switch (e_type)
{
case ET_NONE:
printf("NONE (None)\n");
break;
case ET_REL:
printf("REL (Relocatable file)\n");
break;
case ET_EXEC:
printf("EXEC (Executable file)\n");
break;
case ET_DYN:
printf("DYN (Shared object file)\n");
break;
case ET_CORE:
printf("CORE (Core file)\n");
break;
default:
printf("<unknown: %x>\n", e_type);
}
}



/**
* print_entry - function to prints the entry point of an ELF header
*
* @e_entry: address of the ELF entry point
* @e_ident: a pointer to an array of ELF class.
*/

void print_entry(unsigned long int e_entry, unsigned char *e_ident)
{
printf("  Entry point address:               ");

if (e_ident[EI_DATA] == ELFDATA2MSB)
{
e_entry = ((e_entry << 8) & 0xFF00FF00) | ((e_entry >> 8) & 0xFF00FF);
e_entry = (e_entry << 16) | (e_entry >> 16);
}

if (e_ident[EI_CLASS] == ELFCLASS32)
printf("%#x\n", (unsigned int)e_entry);

else
printf("%#lx\n", e_entry);
}


/**
* close_elf - function that closes an ELF file.
* @fd_elf: file descriptor of the ELF file.
*
* Description: if the file cannot be closed, exit code 98.
*/

void close_elf(int fd_elf)
{
if (close(fd_elf) == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't close fd %d\n", fd_elf);
exit(98);
}
}



/**
* main - entry point
*        a function to display ELF header info
*        at the start of an ELF file
*
* @argc: number of arguments passed to the program
* @argv: pointers to array of arguments
*
* Return: Always 0 on success.
*
* Description: if it happens that the file is not an ELF file
*              or the function fails, exit code 98
*/

int main(int __attribute__((__unused__)) argc, char *argv[])
{
Elf64_Ehdr *header;
int fd, r_val;

fd = open(argv[1], O_RDONLY);
if (fd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
exit(98);
}
header = malloc(sizeof(Elf64_Ehdr));
if (header == NULL)
{
close_elf(fd);
dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
exit(98);
}
r_val = read(fd, header, sizeof(Elf64_Ehdr));
if (r_val == -1)
{
free(header);
close_elf(fd);
dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
exit(98);
}

check_elf(header->e_ident);
printf("ELF Header:\n");
print_magic(header->e_ident);
print_class(header->e_ident);
print_data(header->e_ident);
print_version(header->e_ident);
print_osabi(header->e_ident);
print_abiversion(header->e_ident);
print_type(header->e_type, header->e_ident);
print_entry(header->e_entry, header->e_ident);

free(header);
close_elf(fd);
return (0);
}
