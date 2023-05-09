#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <elf.h>


ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

/**** ELF HEADER ******/
void check_elf(unsigned char *elf_h_ident);
void print_magic(unsigned char *elf_h_indent);
void print_class(unsigned char *elf_h_ident);
void print_data(unsigned char *elf_h_ident);
void print_version(unsigned char *elf_h_ident);
void print_osabi(unsigned char *elf_h_ident);
void print_abiversion(unsigned char *elf_h_ident);
void print_abi_version(unsigned char *elf_h_ident);
void print_type(unsigned int elf_type, unsigned char *elf_h_ident);
void print_entry(unsigned long int elf_entry, unsigned char *elf_h_ident);
void close_elf(int fd_elf);
int main(int __attribute__((__unused__)) argc, char *argv[]);

#endif

