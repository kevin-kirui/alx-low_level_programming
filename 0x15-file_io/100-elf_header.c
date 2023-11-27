#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
#include "main.h"

/**
 * @file elf_header.c
 * @brief Display information from the ELF header of an ELF file.
 *
 * This program takes an ELF file as an argument and displays key information
 * from its ELF header, such as magic number, class, data encoding, version,
 * OS/ABI, ABI version, type, and entry point address.
 *
 * Usage: elf_header elf_filename
 *
 * If the provided file is not a valid ELF file or if there is an error
 * reading the ELF header, the program exits with status code 98.
 *
 * Note: The program uses the Elf64_Ehdr structure from the elf.h header.
 *
 * @author Your Name
 */
void print_error(char *message)
{
	fprintf(stderr, "Error: %s\n", message);
	exit(98);
}

/**
 * @brief Print information from the ELF header.
 *
 * @param header Pointer to the ELF header structure.
 */
void print_elf_header_info(Elf64_Ehdr *header)
{
	printf("  Magic:   ");
	for (int i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", header->e_ident[i]);
		if (i < EI_NIDENT - 1)
		{
			printf(" ");
		}
	}
	printf("\n");

	printf("  Class:                             ELF%u\n", header->e_ident[EI_CLASS]);
	printf("  Data:                              %s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
	printf("  Version:                           %u (current)\n", header->e_ident[EI_VERSION]);
	printf("  OS/ABI:                            %u\n", header->e_ident[EI_OSABI]);
	printf("  ABI Version:                       %u\n", header->e_ident[EI_ABIVERSION]);
	printf("  Type:                              %u\n", header->e_type);
	printf("  Entry point address:               %#lx\n", (unsigned long)header->e_entry);
}

/**
 * @brief Main function to read and display information from ELF header.
 *
 * @param argc Number of command-line arguments.
 * @param argv Array of command-line argument strings.
 * @return Returns 0 on success, exits with status code 98 on failure.
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		print_error("Usage: elf_header elf_filename");
	}
	int fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		print_error("Cannot open ELF file");
	}
	Elf64_Ehdr header;
	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		print_error("Error reading ELF header");
	}
	if (header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1 || header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3)
	{
		print_error("Not an ELF file");
	}
	printf("ELF Header:\n");
	print_elf_header_info(&header);

	close(fd);
	return (0);
}

