#include "main.h"
/**
 * print_ikosa - outputs error
 * @message: sms indicating error
 */
void print_ikosa(const char *message) {
	fprintf(stderr, "%s\n", message);
	exit(98);
}
/**
 * print_elf_header_info - prints the elf header content
 * @header: ptr to the header info
 */
void print_elf_header_info(Elf64_Ehdr *header)
{
	int i = 0;
	printf("  Magic:   ");
	while (i < EI_NIDENT)
	{
		printf("%02x ", header->e_ident[i]);
		i++;
	}
	printf("\n");   
	printf("  Class:                             %s\n", (header->e_ident[EI_CLASS] == ELFCLASS32) ? "ELF32" : "ELF64");
	printf("  Data:                              %s\n", (header->e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little endian" : "2's complement, big endian");
	printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
	printf("  OS/ABI:                            %d\n", header->e_ident[EI_OSABI]);
	printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
	printf("  Type:                              %d\n", header->e_type);
	printf("  Entry point address:               %lx\n", (unsigned long)header->e_entry);
}
