<<<<<<< HEAD
=======
<<<<<<< HEAD
/*
 * File: 100-elf_header.c
 * Auth: Igbe Besthor
 */

=======
>>>>>>> b93e9d5 (elf)
>>>>>>> master
#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_abi(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);

/**
 * check_elf - Checks if a file is an ELF file.
 * @e_ident: A pointer to an array containing the ELF magic numbers.
 *
 * Description: If the file is not an ELF file - exit code 98.
 */
void check_elf(unsigned char *e_ident)
{
	int index;

	for (index = 0; index < 4; index++)
	{
		if (e_ident[index] != 127 &&
<<<<<<< HEAD
		    e_ident[index] != 'E' &&
		    e_ident[index] != 'L' &&
		    e_ident[index] != 'F')
=======
<<<<<<< HEAD
				 e_ident[index] != 'E' &&
				 e_ident[index] != 'L' &&
				 e_ident[index] != 'F')
=======
		    e_ident[index] != 'E' &&
		    e_ident[index] != 'L' &&
		    e_ident[index] != 'F')
>>>>>>> b93e9d5 (elf)
>>>>>>> master
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * print_magic - Prints the magic numbers of an ELF header.
 * @e_ident: A pointer to an array containing the ELF magic numbers.
 *
 * Description: Magic numbers are separated by spaces.
 */
void print_magic(unsigned char *e_ident)
{
	int index;

<<<<<<< HEAD
	printf("  Magic:   ");
=======
<<<<<<< HEAD
<<<<<<< HEAD
	printf("  Magic:   ");
=======
	printf(" Magic: ");
>>>>>>> b93e9d5 (elf)
=======
	printf("  Magic:   ");
>>>>>>> 789f817 (elf)
>>>>>>> master

	for (index = 0; index < EI_NIDENT; index++)
	{
		printf("%02x", e_ident[index]);

		if (index == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * print_class - Prints the class of an ELF header.
 * @e_ident: A pointer to an array containing the ELF class.
 */
void print_class(unsigned char *e_ident)
{
<<<<<<< HEAD
=======
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> master
	printf("  Class:                             ");

	switch (e_ident[EI_CLASS])
	{
<<<<<<< HEAD
=======
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
=======
	printf(" Class: ");
=======
	printf("  Class:                             ");
>>>>>>> 789f817 (elf)

	switch (e_ident[EI_CLASS])
	{
>>>>>>> master
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
<<<<<<< HEAD
=======
>>>>>>> b93e9d5 (elf)
>>>>>>> master
	}
}

/**
 * print_data - Prints the data of an ELF header.
 * @e_ident: A pointer to an array containing the ELF class.
 */
void print_data(unsigned char *e_ident)
{
<<<<<<< HEAD
=======
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> master
	printf("  Data:                              ");

	switch (e_ident[EI_DATA])
	{
<<<<<<< HEAD
=======
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
=======
	printf(" Data: ");
=======
	printf("  Data:                              ");
>>>>>>> 789f817 (elf)

	switch (e_ident[EI_DATA])
	{
>>>>>>> master
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
<<<<<<< HEAD
=======
>>>>>>> b93e9d5 (elf)
>>>>>>> master
	}
}

/**
<<<<<<< HEAD
=======
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> master
 * print_version - Prints the version of an ELF header.
 * @e_ident: A pointer to an array containing the ELF version.
 */
void print_version(unsigned char *e_ident)
{
	printf("  Version:                           %d",
<<<<<<< HEAD
=======
			e_ident[EI_VERSION]);

	switch (e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)\n");
			break;
		default:
			printf("\n");
			break;
=======
 *  * print_version - Prints the version of an ELF header.
 *   * @e_ident: A pointer to an array containing the ELF version.
 *    */
=======
 * print_version - Prints the version of an ELF header.
 * @e_ident: A pointer to an array containing the ELF version.
 */
>>>>>>> 789f817 (elf)
void print_version(unsigned char *e_ident)
{
	printf("  Version:                           %d",
>>>>>>> master
	       e_ident[EI_VERSION]);

	switch (e_ident[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
<<<<<<< HEAD
=======
>>>>>>> b93e9d5 (elf)
>>>>>>> master
	}
}

/**
 * print_osabi - Prints the OS/ABI of an ELF header.
 * @e_ident: A pointer to an array containing the ELF version.
 */
void print_osabi(unsigned char *e_ident)
{
<<<<<<< HEAD
=======
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> master
	printf("  OS/ABI:                            ");

	switch (e_ident[EI_OSABI])
	{
<<<<<<< HEAD
=======
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
=======
	printf(" OS/ABI: ");
=======
	printf("  OS/ABI:                            ");
>>>>>>> 789f817 (elf)

	switch (e_ident[EI_OSABI])
	{
>>>>>>> master
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
<<<<<<< HEAD
=======
>>>>>>> b93e9d5 (elf)
>>>>>>> master
	}
}

/**
 * print_abi - Prints the ABI version of an ELF header.
 * @e_ident: A pointer to an array containing the ELF ABI version.
 */
void print_abi(unsigned char *e_ident)
{
<<<<<<< HEAD
	printf("  ABI Version:                       %d\n",
	       e_ident[EI_ABIVERSION]);
=======
<<<<<<< HEAD
<<<<<<< HEAD
	printf("  ABI Version:                       %d\n",
			e_ident[EI_ABIVERSION]);
=======
	printf(" ABI Version: %d\n",
		e_ident[EI_ABIVERSION]);
>>>>>>> b93e9d5 (elf)
=======
	printf("  ABI Version:                       %d\n",
	       e_ident[EI_ABIVERSION]);
>>>>>>> 789f817 (elf)
>>>>>>> master
}

/**
 * print_type - Prints the type of an ELF header.
 * @e_type: The ELF type.
 * @e_ident: A pointer to an array containing the ELF class.
 */
void print_type(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

<<<<<<< HEAD
=======
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> master
	printf("  Type:                              ");

	switch (e_type)
	{
<<<<<<< HEAD
=======
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
=======
	printf(" Type: ");
=======
	printf("  Type:                              ");
>>>>>>> 789f817 (elf)

	switch (e_type)
	{
>>>>>>> master
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
<<<<<<< HEAD
=======
>>>>>>> b93e9d5 (elf)
>>>>>>> master
	}
}

/**
 * print_entry - Prints the entry point of an ELF header.
 * @e_entry: The address of the ELF entry point.
 * @e_ident: A pointer to an array containing the ELF class.
 */
void print_entry(unsigned long int e_entry, unsigned char *e_ident)
{
<<<<<<< HEAD
	printf("  Entry point address:               ");
=======
<<<<<<< HEAD
<<<<<<< HEAD
	printf("  Entry point address:               ");
=======
	printf(" Entry point address: ");
>>>>>>> b93e9d5 (elf)
=======
	printf("  Entry point address:               ");
>>>>>>> 789f817 (elf)
>>>>>>> master

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
<<<<<<< HEAD
			  ((e_entry >> 8) & 0xFF00FF);
=======
<<<<<<< HEAD
			((e_entry >> 8) & 0xFF00FF);
=======
			  ((e_entry >> 8) & 0xFF00FF);
>>>>>>> b93e9d5 (elf)
>>>>>>> master
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);

	else
		printf("%#lx\n", e_entry);
}

/**
 * close_elf - Closes an ELF file.
 * @elf: The file descriptor of the ELF file.
 *
 * Description: If the file cannot be closed - exit code 98.
 */
void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
<<<<<<< HEAD
			"Error: Can't close fd %d\n", elf);
=======
<<<<<<< HEAD
				"Error: Can't close fd %d\n", elf);
=======
			"Error: Can't close fd %d\n", elf);
>>>>>>> b93e9d5 (elf)
>>>>>>> master
		exit(98);
	}
}

/**
 * main - Displays the information contained in the
<<<<<<< HEAD
 *        ELF header at the start of an ELF file.
=======
<<<<<<< HEAD
<<<<<<< HEAD
 * ELF header at the start of an ELF file
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Description: If the file is not an ELF File or
 * the function fails - exit code 98.
 * Return: 0 on success.
=======
 * ELF header at the start of an ELF file.
=======
 *        ELF header at the start of an ELF file.
>>>>>>> 789f817 (elf)
>>>>>>> master
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the file is not an ELF File or
<<<<<<< HEAD
 *              the function fails - exit code 98.
=======
<<<<<<< HEAD
 * the function fails - exit code 98.
>>>>>>> b93e9d5 (elf)
=======
 *              the function fails - exit code 98.
>>>>>>> 789f817 (elf)
>>>>>>> master
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int o, r;

	o = open(argv[1], O_RDONLY);
	if (o == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close_elf(o);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	r = read(o, header, sizeof(Elf64_Ehdr));
	if (r == -1)
	{
		free(header);
		close_elf(o);
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
	print_abi(header->e_ident);
	print_type(header->e_type, header->e_ident);
	print_entry(header->e_entry, header->e_ident);

	free(header);
<<<<<<< HEAD
	close_elf(o);
=======
<<<<<<< HEAD
	close_elf(0);
=======
	close_elf(o);
>>>>>>> b93e9d5 (elf)
>>>>>>> master
	return (0);
}
