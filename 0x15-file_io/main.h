#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#define BUFF_SIZE 64

void print_ikosa(const char *message);
void print_elf_header_info(Elf64_Ehdr *header);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void copy_file(const char *file_from, const char *file_to);
#endif
